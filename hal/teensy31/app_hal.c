#pragma once

#include <unistd.h>
#include "display/ILI9341.h"
#include "ui.h"
#include <time.h>
#include "tft.h"


// Configuration
//   Timings
#define LOOP_WAIT_TIME 100 // ms -> 1/Display refresh rate

//   Buffers
#define STREAM_INPUT_BUFFER_LEN 1024

//   Baud
#define BT_SERIAL_BAUD 38400
#define ROUTER_SERIAL_BAUD 115200

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

void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();

	lv_tick_inc(1);

#ifdef USE_RTOS_SYSTICK
	osSystickHandler();
#endif
}

void hal_setup(void)
{
    HAL_Init();

  	/* Configure the system clock to 180 MHz */
  	SystemClock_Config();

  	tft_init();
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

        HAL_Delay(5);
        lv_task_handler();
    }
}

void updateCellVoltage(int voltage){
    float pro = ((float)voltage - 250.0f) / (420.0f - 250.0f) * 100.0f;
    if(pro <33.3f){
        lv_obj_set_style_bg_color(ui_Cell_Voltage_Bar, lv_color_hex(0x7A0018), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    }else if(pro < 66.6f){
        lv_obj_set_style_bg_color(ui_Cell_Voltage_Bar, lv_color_hex(0x7A7A18), LV_PART_INDICATOR | LV_STATE_DEFAULT);

    }else{
        lv_obj_set_style_bg_color(ui_Cell_Voltage_Bar, lv_color_hex(0x007A18), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    }

    float f = (float)voltage/100.0f;
    char label_text[5];
    sprintf(label_text, "%.2fV", f);
    lv_label_set_text(ui_Cell_Voltage_Label, label_text);
    lv_bar_set_value(ui_Cell_Voltage_Bar,voltage, LV_ANIM_OFF);
}

void updateCellTemperature(int temperature){
    float pro = ((float)temperature - 20.0f) / (60.0f - 20.0f) * 100.0f;
    if(pro <50.0f){
        lv_obj_set_style_bg_color(ui_Temperature_Bar, lv_color_hex(0x007A18), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    }else if(pro < 75.0f){
        lv_obj_set_style_bg_color(ui_Temperature_Bar, lv_color_hex(0x7A7A18), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    }else{
        lv_obj_set_style_bg_color(ui_Temperature_Bar, lv_color_hex(0x7A0018), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    }

    char label_text[4];
    sprintf(label_text, "%d°C", temperature);
    lv_label_set_text(ui_Cell_Temperatur_Label, label_text);
    lv_bar_set_value(ui_Temperature_Bar,temperature, LV_ANIM_ON);
}

void updateBatteryVoltage(int voltage){
    float pro = ((float)voltage - 250.0f) / (420.0f - 250.0f) * 100.0f;
    if(pro <25.0f){
        lv_obj_set_style_arc_color(ui_Battery_Arc, lv_color_hex(0x007A18), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    }else if(pro < 75.0f){
        lv_obj_set_style_arc_color(ui_Battery_Arc, lv_color_hex(0x7A7A18), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    }else{
        lv_obj_set_style_arc_color(ui_Battery_Arc, lv_color_hex(0x7A0018), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    }

    lv_arc_set_value(ui_Battery_Arc,voltage);
}

void updateSpeed(int speed){

    char label_text[3];
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
    char label_text[1];
    switch (state)
    {
    case 5:
        sprintf(label_text, "P");
        lv_label_set_text(ui_State_Label, label_text);
        break;
    case 20:
        sprintf(label_text, "D");
        lv_label_set_text(ui_State_Label, label_text);
        break;

    case 35:
        sprintf(label_text, "E");
        lv_label_set_text(ui_State_Label, label_text);
        break;

    default:
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

        if(power>125){
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
