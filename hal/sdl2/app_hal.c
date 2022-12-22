#include <unistd.h>
#define SDL_MAIN_HANDLED        /*To fix SDL's "undefined reference to WinMain" issue*/
#include <SDL2/SDL.h>
#include "display/monitor.h"
#include "indev/mouse.h"
#include "indev/mousewheel.h"
#include "indev/keyboard.h"
#include "sdl/sdl.h"
#include "ui.h"
#include <time.h>



    struct timespec start_time, end_time;
    int voltage =250;
    int cellVoltage =350;
    int cellTemp =50;
    int power =50;
    int speed =35;
    int carState =0;
    bool speedIsRising = true;
    bool voltIsRising = true;
    bool tempIsRising = true;
    bool cellVoltIsRising = true;
    bool powerIsRising = true;
    bool isBMSError = false;
    bool isIMDError = false;
    bool isHVDError = true;
    bool isMHRError = true;
    bool isMHLError = false;

/**
 * A task to measure the elapsed time for LittlevGL
 * @param data unused
 * @return never return
 */
static int tick_thread(void * data)
{
    (void)data;

    while(1) {
        SDL_Delay(5);   /*Sleep for 5 millisecond*/
        lv_tick_inc(5); /*Tell LittelvGL that 5 milliseconds were elapsed*/
    }

    return 0;
}


void hal_setup(void)
{
    // Workaround for sdl2 `-m32` crash
    // https://bugs.launchpad.net/ubuntu/+source/libsdl2/+bug/1775067/comments/7
    #ifndef WIN32
        setenv("DBUS_FATAL_WARNINGS", "0", 1);
    #endif

    /* Add a display
     * Use the 'monitor' driver which creates window on PC's monitor to simulate a display*/

    static lv_disp_draw_buf_t disp_buf;
    static lv_color_t buf[SDL_HOR_RES * 10];                          /*Declare a buffer for 10 lines*/
    lv_disp_draw_buf_init(&disp_buf, buf, NULL, SDL_HOR_RES * 10);    /*Initialize the display buffer*/

    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);              /*Basic initialization*/
    disp_drv.flush_cb = sdl_display_flush;    /*Used when `LV_VDB_SIZE != 0` in lv_conf.h (buffered drawing)*/
    disp_drv.draw_buf = &disp_buf;
    disp_drv.hor_res = SDL_HOR_RES;
    disp_drv.ver_res = SDL_VER_RES;
    //disp_drv.disp_fill = monitor_fill;      /*Used when `LV_VDB_SIZE == 0` in lv_conf.h (unbuffered drawing)*/
    //disp_drv.disp_map = monitor_map;        /*Used when `LV_VDB_SIZE == 0` in lv_conf.h (unbuffered drawing)*/
    lv_disp_drv_register(&disp_drv);

    /* Add the mouse as input device
     * Use the 'mouse' driver which reads the PC's mouse*/
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);            /*Basic initialization*/
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = sdl_mouse_read;       /*This function will be called periodically (by the library) to get the mouse position and state*/
    lv_indev_drv_register(&indev_drv);

    sdl_init();
    clock_gettime(CLOCK_REALTIME, &start_time);


    /* Tick init.
     * You have to call 'lv_tick_inc()' in periodically to inform LittelvGL about how much time were elapsed
     * Create an SDL thread to do this*/
    SDL_CreateThread(tick_thread, "tick", NULL);
}

void hal_loop(void)
{
    while(1) {

        updateCellVoltage(cellVoltage);
        updateBatteryVoltage(voltage);
        updateCellTemperature(cellTemp);
        updatePowerArc(power);
        updateRecupArc(power);
        updateSpeed(speed);
        updateBMSerror(isBMSError);
        updateIMDerror(isIMDError);
        updateHVDerror(isHVDError);
        updateMHLerror(isMHLError);
        updateMHRerror(isMHRError);
        updateCarState(carState);
        updateValues();
        SDL_Delay(5);
        lv_task_handler();
    }
}

void updateCellVoltage(int voltage){
    float f = (float)voltage/100.0f;
    char label_text[100];
    sprintf(label_text, "%.2fV", f);
    lv_label_set_text(ui_Cell_Voltage_Label, label_text);
    lv_bar_set_value(ui_Cell_Voltage_Bar,voltage, LV_ANIM_OFF);
}

void updateCellTemperature(int temperature){

    char label_text[100];
    sprintf(label_text, "%d°C", temperature);
    lv_label_set_text(ui_Cell_Temperatur_Label, label_text);
    lv_bar_set_value(ui_Temperature_Bar,temperature, LV_ANIM_ON);
}

void updateBatteryVoltage(int voltage){

    char label_text[100];
    sprintf(label_text, "%dV", voltage);
    lv_label_set_text(ui_Battery_Voltage_Label, label_text);
    lv_bar_set_value(ui_Battery_Voltage_Bar,voltage, LV_ANIM_ON);
}

void updateSpeed(int speed){

    char label_text[100];
    sprintf(label_text, "%d", speed);
    lv_label_set_text(ui_Speed_Label_1, label_text);
    lv_label_set_text(ui_Speed_Label_2, label_text);
}

void updatePowerArc(int amp){
    if(amp>=0){
    lv_arc_set_value(ui_Power_Arc,amp);
    }
}

void updateRecupArc(int amp){
    if(amp<=0){
    lv_arc_set_value(ui_Recuperation_Arc,amp);
    }
}

void updateBMSerror(bool bms){
    if(bms){
    lv_obj_set_style_bg_opa(ui_BMS_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    }else{
    lv_obj_set_style_bg_opa(ui_BMS_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
}

void updateIMDerror(bool imd){
    if(imd){
    lv_obj_set_style_bg_opa(ui_IMD_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    }else{
    lv_obj_set_style_bg_opa(ui_IMD_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
}

void updateHVDerror(bool hvd){
    if(hvd){
    lv_obj_set_style_bg_opa(ui_HVD_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    }else{
    lv_obj_set_style_bg_opa(ui_HVD_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
}

void updateMHRerror(bool mhr){
    if(mhr){
    lv_obj_set_style_bg_opa(ui_MHR_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    }else{
    lv_obj_set_style_bg_opa(ui_MHR_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
}

void updateMHLerror(bool mhl){
    if(mhl){
    lv_obj_set_style_bg_opa(ui_MHL_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    }else{
    lv_obj_set_style_bg_opa(ui_MHL_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
}

void updateCarState(int state){
    switch (state/10)
    {
    case 1:
        lv_obj_set_style_bg_opa(ui_RTD_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_ERR_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_BUZ_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_STB_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        break;

    case 2:
        lv_obj_set_style_bg_opa(ui_RTD_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_ERR_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_BUZ_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_STB_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);   
        break;
    case 3:
        lv_obj_set_style_bg_opa(ui_RTD_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_ERR_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_BUZ_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_STB_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);  
        break;

    default:
        lv_obj_set_style_bg_opa(ui_RTD_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_ERR_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_BUZ_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(ui_STB_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);  
        break;
    }

}


void updateValues(){

        // Perform some operation here

    // Get the end time
    clock_gettime(CLOCK_REALTIME, &end_time);

    // Calculate the elapsed time in nanoseconds
    long elapsed_time = (end_time.tv_sec - start_time.tv_sec) * 1000000000 +
                    (end_time.tv_nsec - start_time.tv_nsec);

    // Convert to milliseconds
    elapsed_time = elapsed_time / 1000000;        

    if(elapsed_time>100){

        carState++;

        if(voltIsRising){
            voltage+=5;
        }else{
            voltage-=5;
        }

        if(cellVoltIsRising){
            cellVoltage+=5;
        }else{
            cellVoltage-=5;
        }

        if(speedIsRising){
            speed+=5;
        }else{
            speed-=5;
        }

            if(tempIsRising){
            cellTemp++;
        }else{
            cellTemp--;
        }

        if(powerIsRising){
            power+=10;
        }else{
            power-=10;
        }
        

        if(voltage>420){
            voltIsRising = false;
            isMHRError = false;
            isMHLError = false;
        }else if(voltage<250){
            voltIsRising = true;
            isMHRError = true;
            isMHLError = true;
        }

        if(cellVoltage>420){
            cellVoltIsRising = false;
            isIMDError =false;
        }else if(cellVoltage<250){
            cellVoltIsRising = true;
            isIMDError =true;
        }

        if(cellTemp>60){
            tempIsRising = false;
            isHVDError =false;
        }else if(cellTemp<20){
            tempIsRising = true;
            isHVDError =true;
        }

        if(power>100){
            powerIsRising = false;
            isMHLError = false;
        }else if(power<-100){
            powerIsRising = true;
            isMHLError = true;
        }

        
        if(speed>150){
            isBMSError = false;
            speedIsRising = false;
        }else if(speed<-10){
            isBMSError = true;
            speedIsRising = true;
        }

        if(carState>40){
            carState =0;
        }
        clock_gettime(CLOCK_REALTIME, &start_time);
    }
}
