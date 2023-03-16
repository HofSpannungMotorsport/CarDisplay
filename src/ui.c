// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Driving_Screen;
lv_obj_t * ui_Power_Panel;
lv_obj_t * ui_Power_Arc;
lv_obj_t * ui_Recuperation_Arc;
lv_obj_t * ui_Battery_Arc;
lv_obj_t * ui_Driving_Screen_Image1;
lv_obj_t * ui_Speed_Panel;
lv_obj_t * ui_Speed_Label_1;
lv_obj_t * ui_Speed_Label_2;
lv_obj_t * ui_Kmh_Label;
lv_obj_t * ui_State_Panel;
lv_obj_t * ui_State_Label;
lv_obj_t * ui_Preset_Label;
lv_obj_t * ui_Battery_Panel;
lv_obj_t * ui_Battery_Temp_Panel;
lv_obj_t * ui_Temperature_Label1;
lv_obj_t * ui_Temperature_Bar;
lv_obj_t * ui_Cell_Temperatur_Label;
lv_obj_t * ui_Cell_Volt_Panel;
lv_obj_t * ui_Cell_Label;
lv_obj_t * ui_Cell_Voltage_Bar;
lv_obj_t * ui_Cell_Voltage_Label;
lv_obj_t * ui_Error_Panel;
lv_obj_t * ui_BMS_Panel;
lv_obj_t * ui_BMS_Label;
lv_obj_t * ui_IMD_Panel;
lv_obj_t * ui_IMD_Label;
lv_obj_t * ui_HVD_Panel;
lv_obj_t * ui_HVD_Label;
lv_obj_t * ui_MHL_Panel;
lv_obj_t * ui_MHL_Label;
lv_obj_t * ui_MHR_Panel;
lv_obj_t * ui_MHR_Label;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Driving_Screen_screen_init(void)
{
    ui_Driving_Screen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Driving_Screen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Driving_Screen, lv_color_hex(0x1E1E21), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Driving_Screen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Power_Panel = lv_obj_create(ui_Driving_Screen);
    lv_obj_set_width(ui_Power_Panel, lv_pct(100));
    lv_obj_set_height(ui_Power_Panel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Power_Panel, 0);
    lv_obj_set_y(ui_Power_Panel, -40);
    lv_obj_set_align(ui_Power_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Power_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Power_Panel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Power_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Power_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Power_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Power_Arc = lv_arc_create(ui_Power_Panel);
    lv_obj_set_width(ui_Power_Arc, 210);
    lv_obj_set_height(ui_Power_Arc, 210);
    lv_obj_set_align(ui_Power_Arc, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Power_Arc, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_arc_set_range(ui_Power_Arc, 0, 125);
    lv_arc_set_value(ui_Power_Arc, 75);
    lv_arc_set_bg_angles(ui_Power_Arc, 180, 0);
    lv_obj_set_style_arc_color(ui_Power_Arc, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Power_Arc, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Power_Arc, 44, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Power_Arc, false, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Power_Arc, lv_color_hex(0x007A18), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Power_Arc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Power_Arc, 44, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Power_Arc, false, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_opa(ui_Power_Arc, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Recuperation_Arc = lv_arc_create(ui_Power_Panel);
    lv_obj_set_width(ui_Recuperation_Arc, 210);
    lv_obj_set_height(ui_Recuperation_Arc, 210);
    lv_obj_set_align(ui_Recuperation_Arc, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Recuperation_Arc,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_arc_set_range(ui_Recuperation_Arc, -100, 0);
    lv_arc_set_value(ui_Recuperation_Arc, -50);
    lv_arc_set_bg_angles(ui_Recuperation_Arc, 128, 180);
    lv_arc_set_mode(ui_Recuperation_Arc, LV_ARC_MODE_REVERSE);
    lv_obj_set_style_arc_color(ui_Recuperation_Arc, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Recuperation_Arc, 70, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Recuperation_Arc, 44, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Recuperation_Arc, false, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Recuperation_Arc, lv_color_hex(0x007A18), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Recuperation_Arc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Recuperation_Arc, 44, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Recuperation_Arc, false, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_opa(ui_Recuperation_Arc, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Battery_Arc = lv_arc_create(ui_Power_Panel);
    lv_obj_set_width(ui_Battery_Arc, 210);
    lv_obj_set_height(ui_Battery_Arc, 210);
    lv_obj_set_align(ui_Battery_Arc, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Battery_Arc, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Battery_Arc, LV_SCROLLBAR_MODE_OFF);
    lv_arc_set_range(ui_Battery_Arc, 250, 420);
    lv_arc_set_value(ui_Battery_Arc, 420);
    lv_arc_set_bg_angles(ui_Battery_Arc, 0, 56);
    lv_arc_set_mode(ui_Battery_Arc, LV_ARC_MODE_REVERSE);
    lv_obj_set_style_arc_color(ui_Battery_Arc, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Battery_Arc, 70, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Battery_Arc, 44, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Battery_Arc, false, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_border_color(ui_Battery_Arc, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Battery_Arc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Battery_Arc, 1, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Battery_Arc, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Battery_Arc, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Battery_Arc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Battery_Arc, 1, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Battery_Arc, 1, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Battery_Arc, lv_color_hex(0xC01A1A), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Battery_Arc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Battery_Arc, 13, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Battery_Arc, false, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_opa(ui_Battery_Arc, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Driving_Screen_Image1 = lv_img_create(ui_Power_Panel);
    lv_img_set_src(ui_Driving_Screen_Image1, &ui_img_dashboard2_png);
    lv_obj_set_width(ui_Driving_Screen_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Driving_Screen_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Driving_Screen_Image1, 0);
    lv_obj_set_y(ui_Driving_Screen_Image1, -9);
    lv_obj_set_align(ui_Driving_Screen_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Driving_Screen_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Driving_Screen_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Driving_Screen_Image1, 180);

    ui_Speed_Panel = lv_obj_create(ui_Power_Panel);
    lv_obj_set_width(ui_Speed_Panel, 100);
    lv_obj_set_height(ui_Speed_Panel, 100);
    lv_obj_set_x(ui_Speed_Panel, -3);
    lv_obj_set_y(ui_Speed_Panel, 5);
    lv_obj_set_align(ui_Speed_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Speed_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Speed_Panel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Speed_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Speed_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Speed_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Speed_Label_1 = lv_label_create(ui_Speed_Panel);
    lv_obj_set_width(ui_Speed_Label_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Speed_Label_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Speed_Label_1, 2);
    lv_obj_set_y(ui_Speed_Label_1, -10);
    lv_obj_set_align(ui_Speed_Label_1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Speed_Label_1, "100");
    lv_obj_set_style_text_color(ui_Speed_Label_1, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Speed_Label_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Speed_Label_1, &ui_font_Speed, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Speed_Label_2 = lv_label_create(ui_Speed_Panel);
    lv_obj_set_width(ui_Speed_Label_2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Speed_Label_2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Speed_Label_2, 0);
    lv_obj_set_y(ui_Speed_Label_2, -10);
    lv_obj_set_align(ui_Speed_Label_2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Speed_Label_2, "100");
    lv_obj_set_style_text_color(ui_Speed_Label_2, lv_color_hex(0xCECEE3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Speed_Label_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Speed_Label_2, &ui_font_Speed, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Kmh_Label = lv_label_create(ui_Speed_Panel);
    lv_obj_set_width(ui_Kmh_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Kmh_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Kmh_Label, 5);
    lv_obj_set_y(ui_Kmh_Label, 22);
    lv_obj_set_align(ui_Kmh_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Kmh_Label, "km/h");
    lv_obj_set_style_text_color(ui_Kmh_Label, lv_color_hex(0xCECEE3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Kmh_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Kmh_Label, &ui_font_kmh, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_State_Panel = lv_obj_create(ui_Power_Panel);
    lv_obj_set_width(ui_State_Panel, 80);
    lv_obj_set_height(ui_State_Panel, 50);
    lv_obj_set_x(ui_State_Panel, 0);
    lv_obj_set_y(ui_State_Panel, 60);
    lv_obj_set_align(ui_State_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_State_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_State_Panel, lv_color_hex(0x159E15), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_State_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_State_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_State_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_State_Label = lv_label_create(ui_State_Panel);
    lv_obj_set_width(ui_State_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_State_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_State_Label, 0);
    lv_obj_set_y(ui_State_Label, -5);
    lv_obj_set_align(ui_State_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_State_Label, "P");
    lv_obj_set_style_text_color(ui_State_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_State_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_State_Label, &ui_font_State, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Preset_Label = lv_label_create(ui_State_Panel);
    lv_obj_set_width(ui_Preset_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Preset_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Preset_Label, 0);
    lv_obj_set_y(ui_Preset_Label, 15);
    lv_obj_set_align(ui_Preset_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Preset_Label, "80KW");
    lv_obj_set_style_text_color(ui_Preset_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Preset_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Preset_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Battery_Panel = lv_obj_create(ui_Driving_Screen);
    lv_obj_set_height(ui_Battery_Panel, 59);
    lv_obj_set_width(ui_Battery_Panel, lv_pct(100));
    lv_obj_set_x(ui_Battery_Panel, 0);
    lv_obj_set_y(ui_Battery_Panel, 90);
    lv_obj_set_align(ui_Battery_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Battery_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Battery_Panel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Battery_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Battery_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Battery_Temp_Panel = lv_obj_create(ui_Battery_Panel);
    lv_obj_set_width(ui_Battery_Temp_Panel, 80);
    lv_obj_set_height(ui_Battery_Temp_Panel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Battery_Temp_Panel, 54);
    lv_obj_set_y(ui_Battery_Temp_Panel, 0);
    lv_obj_set_align(ui_Battery_Temp_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Battery_Temp_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Battery_Temp_Panel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery_Temp_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Battery_Temp_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Battery_Temp_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Temperature_Label1 = lv_label_create(ui_Battery_Temp_Panel);
    lv_obj_set_width(ui_Temperature_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Temperature_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Temperature_Label1, 0);
    lv_obj_set_y(ui_Temperature_Label1, -25);
    lv_obj_set_align(ui_Temperature_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Temperature_Label1, "TEMP");
    lv_obj_set_style_text_color(ui_Temperature_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Temperature_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Temperature_Label1, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Temperature_Bar = lv_bar_create(ui_Battery_Temp_Panel);
    lv_bar_set_range(ui_Temperature_Bar, 20, 60);
    lv_bar_set_value(ui_Temperature_Bar, 50, LV_ANIM_OFF);
    lv_obj_set_width(ui_Temperature_Bar, 60);
    lv_obj_set_height(ui_Temperature_Bar, 30);
    lv_obj_set_align(ui_Temperature_Bar, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Temperature_Bar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temperature_Bar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temperature_Bar, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Temperature_Bar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Temperature_Bar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Temperature_Bar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Temperature_Bar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Temperature_Bar, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temperature_Bar, lv_color_hex(0x007A18), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temperature_Bar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Cell_Temperatur_Label = lv_label_create(ui_Temperature_Bar);
    lv_obj_set_width(ui_Cell_Temperatur_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Cell_Temperatur_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Cell_Temperatur_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Cell_Temperatur_Label, "45°C");
    lv_obj_set_style_text_color(ui_Cell_Temperatur_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Cell_Temperatur_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Cell_Temperatur_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Cell_Volt_Panel = lv_obj_create(ui_Battery_Panel);
    lv_obj_set_width(ui_Cell_Volt_Panel, 80);
    lv_obj_set_height(ui_Cell_Volt_Panel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Cell_Volt_Panel, -54);
    lv_obj_set_y(ui_Cell_Volt_Panel, 0);
    lv_obj_set_align(ui_Cell_Volt_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Cell_Volt_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Cell_Volt_Panel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Cell_Volt_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Cell_Volt_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Cell_Volt_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Cell_Label = lv_label_create(ui_Cell_Volt_Panel);
    lv_obj_set_width(ui_Cell_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Cell_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Cell_Label, 0);
    lv_obj_set_y(ui_Cell_Label, -25);
    lv_obj_set_align(ui_Cell_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Cell_Label, "CELL");
    lv_obj_set_style_text_color(ui_Cell_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Cell_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Cell_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Cell_Voltage_Bar = lv_bar_create(ui_Cell_Volt_Panel);
    lv_bar_set_range(ui_Cell_Voltage_Bar, 250, 420);
    lv_bar_set_value(ui_Cell_Voltage_Bar, 50, LV_ANIM_OFF);
    lv_obj_set_width(ui_Cell_Voltage_Bar, 60);
    lv_obj_set_height(ui_Cell_Voltage_Bar, 30);
    lv_obj_set_align(ui_Cell_Voltage_Bar, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Cell_Voltage_Bar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Cell_Voltage_Bar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Cell_Voltage_Bar, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Cell_Voltage_Bar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Cell_Voltage_Bar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Cell_Voltage_Bar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Cell_Voltage_Bar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Cell_Voltage_Bar, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Cell_Voltage_Bar, lv_color_hex(0x007A18), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Cell_Voltage_Bar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Cell_Voltage_Label = lv_label_create(ui_Cell_Voltage_Bar);
    lv_obj_set_width(ui_Cell_Voltage_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Cell_Voltage_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Cell_Voltage_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Cell_Voltage_Label, "3.5V");
    lv_obj_set_style_text_color(ui_Cell_Voltage_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Cell_Voltage_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Cell_Voltage_Label, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Error_Panel = lv_obj_create(ui_Driving_Screen);
    lv_obj_set_width(ui_Error_Panel, 240);
    lv_obj_set_height(ui_Error_Panel, 30);
    lv_obj_set_x(ui_Error_Panel, 0);
    lv_obj_set_y(ui_Error_Panel, 130);
    lv_obj_set_align(ui_Error_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Error_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Error_Panel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Error_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Error_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Error_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Error_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Error_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Error_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Error_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMS_Panel = lv_obj_create(ui_Error_Panel);
    lv_obj_set_width(ui_BMS_Panel, 30);
    lv_obj_set_height(ui_BMS_Panel, 30);
    lv_obj_set_align(ui_BMS_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BMS_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BMS_Panel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BMS_Panel, lv_color_hex(0x9E1515), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BMS_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMS_Label = lv_label_create(ui_BMS_Panel);
    lv_obj_set_width(ui_BMS_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BMS_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BMS_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BMS_Label, "BMS");
    lv_obj_set_style_text_color(ui_BMS_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BMS_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BMS_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMD_Panel = lv_obj_create(ui_Error_Panel);
    lv_obj_set_width(ui_IMD_Panel, 30);
    lv_obj_set_height(ui_IMD_Panel, 30);
    lv_obj_set_x(ui_IMD_Panel, 35);
    lv_obj_set_y(ui_IMD_Panel, 0);
    lv_obj_set_align(ui_IMD_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_IMD_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_IMD_Panel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_IMD_Panel, lv_color_hex(0x9E1515), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_IMD_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMD_Label = lv_label_create(ui_IMD_Panel);
    lv_obj_set_width(ui_IMD_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IMD_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_IMD_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_IMD_Label, "IMD");
    lv_obj_set_style_text_color(ui_IMD_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IMD_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IMD_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HVD_Panel = lv_obj_create(ui_Error_Panel);
    lv_obj_set_width(ui_HVD_Panel, 30);
    lv_obj_set_height(ui_HVD_Panel, 30);
    lv_obj_set_x(ui_HVD_Panel, -35);
    lv_obj_set_y(ui_HVD_Panel, 0);
    lv_obj_set_align(ui_HVD_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_HVD_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_HVD_Panel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_HVD_Panel, lv_color_hex(0x9E1515), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HVD_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HVD_Label = lv_label_create(ui_HVD_Panel);
    lv_obj_set_width(ui_HVD_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HVD_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_HVD_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_HVD_Label, "HVD");
    lv_obj_set_style_text_color(ui_HVD_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HVD_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_HVD_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MHL_Panel = lv_obj_create(ui_Error_Panel);
    lv_obj_set_width(ui_MHL_Panel, 30);
    lv_obj_set_height(ui_MHL_Panel, 30);
    lv_obj_set_x(ui_MHL_Panel, -70);
    lv_obj_set_y(ui_MHL_Panel, 0);
    lv_obj_set_align(ui_MHL_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_MHL_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MHL_Panel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MHL_Panel, lv_color_hex(0x9E1515), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MHL_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MHL_Label = lv_label_create(ui_MHL_Panel);
    lv_obj_set_width(ui_MHL_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MHL_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MHL_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MHL_Label, "MHL");
    lv_obj_set_style_text_color(ui_MHL_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MHL_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MHL_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MHR_Panel = lv_obj_create(ui_Error_Panel);
    lv_obj_set_width(ui_MHR_Panel, 30);
    lv_obj_set_height(ui_MHR_Panel, 30);
    lv_obj_set_x(ui_MHR_Panel, 70);
    lv_obj_set_y(ui_MHR_Panel, 0);
    lv_obj_set_align(ui_MHR_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_MHR_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MHR_Panel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MHR_Panel, lv_color_hex(0x9E1515), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MHR_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MHR_Label = lv_label_create(ui_MHR_Panel);
    lv_obj_set_width(ui_MHR_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MHR_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MHR_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MHR_Label, "MHR");
    lv_obj_set_style_text_color(ui_MHR_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MHR_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MHR_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Driving_Screen_screen_init();
    lv_disp_load_scr(ui_Driving_Screen);
}
