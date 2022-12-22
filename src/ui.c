// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Driving_Screen;
lv_obj_t * ui_Top_Panel;
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
lv_obj_t * ui_Power_Panel;
lv_obj_t * ui_Power_Arc;
lv_obj_t * ui_Recuperation_Arc;
lv_obj_t * ui_Speed_Panel;
lv_obj_t * ui_Speed_Label_1;
lv_obj_t * ui_Speed_Label_2;
lv_obj_t * ui_kmh_Label;
lv_obj_t * ui_Label_0_kw;
lv_obj_t * ui_Label_80_kw;
lv_obj_t * ui_Label_40_kw;
lv_obj_t * ui_Label_20_kw;
lv_obj_t * ui_Label_60_kw;
lv_obj_t * ui_Label_n20_kw;
lv_obj_t * ui_Bot_Panel;
lv_obj_t * ui_Battery_Panel;
lv_obj_t * ui_Battery_Label;
lv_obj_t * ui_Cell_Label;
lv_obj_t * ui_Temperature_Label;
lv_obj_t * ui_Battery_Voltage_Bar;
lv_obj_t * ui_Battery_Voltage_Label;
lv_obj_t * ui_Cell_Voltage_Bar;
lv_obj_t * ui_Cell_Voltage_Label;
lv_obj_t * ui_Temperature_Bar;
lv_obj_t * ui_Cell_Temperatur_Label;
lv_obj_t * ui_Car_State_Panel;
lv_obj_t * ui_STB_Panel;
lv_obj_t * ui_STB_Label;
lv_obj_t * ui_ERR_Panel;
lv_obj_t * ui_ERR_Label;
lv_obj_t * ui_BUZ_Panel;
lv_obj_t * ui_BUZ_Label;
lv_obj_t * ui_RTD_Panel;
lv_obj_t * ui_RTD_Label;

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
    lv_obj_set_style_bg_color(ui_Driving_Screen, lv_color_hex(0x1A1835), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Driving_Screen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Top_Panel = lv_obj_create(ui_Driving_Screen);
    lv_obj_set_width(ui_Top_Panel, 240);
    lv_obj_set_height(ui_Top_Panel, 30);
    lv_obj_set_x(ui_Top_Panel, 0);
    lv_obj_set_y(ui_Top_Panel, -135);
    lv_obj_set_align(ui_Top_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Top_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Top_Panel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Top_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Top_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Top_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Top_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Top_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Top_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Top_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    ui_BMS_Panel = lv_obj_create(ui_Top_Panel);
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

    ui_IMD_Panel = lv_obj_create(ui_Top_Panel);
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

    ui_HVD_Panel = lv_obj_create(ui_Top_Panel);
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

    ui_MHL_Panel = lv_obj_create(ui_Top_Panel);
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

    ui_MHR_Panel = lv_obj_create(ui_Top_Panel);
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

    ui_Power_Panel = lv_obj_create(ui_Driving_Screen);
    lv_obj_set_width(ui_Power_Panel, 240);
    lv_obj_set_height(ui_Power_Panel, 160);
    lv_obj_set_x(ui_Power_Panel, 0);
    lv_obj_set_y(ui_Power_Panel, -20);
    lv_obj_set_align(ui_Power_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Power_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Power_Panel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Power_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Power_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Power_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Power_Arc = lv_arc_create(ui_Power_Panel);
    lv_obj_set_width(ui_Power_Arc, 120);
    lv_obj_set_height(ui_Power_Arc, lv_pct(95));
    lv_obj_set_align(ui_Power_Arc, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_Power_Arc, 50);
    lv_arc_set_bg_angles(ui_Power_Arc, 180, 0);
    lv_obj_set_style_arc_color(ui_Power_Arc, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Power_Arc, 70, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Power_Arc, false, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Power_Arc, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Power_Arc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Power_Arc, false, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_opa(ui_Power_Arc, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Recuperation_Arc = lv_arc_create(ui_Power_Panel);
    lv_obj_set_width(ui_Recuperation_Arc, 120);
    lv_obj_set_height(ui_Recuperation_Arc, lv_pct(95));
    lv_obj_set_align(ui_Recuperation_Arc, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Recuperation_Arc, -100, 0);
    lv_arc_set_value(ui_Recuperation_Arc, -1);
    lv_arc_set_bg_angles(ui_Recuperation_Arc, 70, 180);
    lv_arc_set_mode(ui_Recuperation_Arc, LV_ARC_MODE_REVERSE);
    lv_obj_set_style_arc_color(ui_Recuperation_Arc, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Recuperation_Arc, 70, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Recuperation_Arc, false, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Recuperation_Arc, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Recuperation_Arc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Recuperation_Arc, false, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_opa(ui_Recuperation_Arc, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Speed_Panel = lv_obj_create(ui_Power_Panel);
    lv_obj_set_width(ui_Speed_Panel, 80);
    lv_obj_set_height(ui_Speed_Panel, 80);
    lv_obj_set_x(ui_Speed_Panel, -5);
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
    lv_obj_set_align(ui_Speed_Label_1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Speed_Label_1, "100");
    lv_obj_set_style_text_color(ui_Speed_Label_1, lv_color_hex(0x6A6A9B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Speed_Label_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Speed_Label_1, &ui_font_Speed, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Speed_Label_2 = lv_label_create(ui_Speed_Panel);
    lv_obj_set_width(ui_Speed_Label_2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Speed_Label_2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Speed_Label_2, -3);
    lv_obj_set_y(ui_Speed_Label_2, 0);
    lv_obj_set_align(ui_Speed_Label_2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Speed_Label_2, "100");
    lv_obj_set_style_text_color(ui_Speed_Label_2, lv_color_hex(0xCECEE3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Speed_Label_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Speed_Label_2, &ui_font_Speed, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_kmh_Label = lv_label_create(ui_Power_Panel);
    lv_obj_set_width(ui_kmh_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_kmh_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_kmh_Label, 50);
    lv_obj_set_y(ui_kmh_Label, 28);
    lv_obj_set_align(ui_kmh_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_kmh_Label, "kmh");
    lv_obj_set_style_text_color(ui_kmh_Label, lv_color_hex(0xAFB0D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_kmh_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_kmh_Label, &ui_font_kmh, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_0_kw = lv_label_create(ui_Power_Panel);
    lv_obj_set_width(ui_Label_0_kw, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_0_kw, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_0_kw, -70);
    lv_obj_set_y(ui_Label_0_kw, 0);
    lv_obj_set_align(ui_Label_0_kw, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_0_kw, "0");
    lv_obj_set_style_text_color(ui_Label_0_kw, lv_color_hex(0xAFB0D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_0_kw, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_0_kw, &ui_font_Number_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_80_kw = lv_label_create(ui_Power_Panel);
    lv_obj_set_width(ui_Label_80_kw, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_80_kw, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_80_kw, 75);
    lv_obj_set_y(ui_Label_80_kw, -7);
    lv_obj_set_align(ui_Label_80_kw, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_80_kw, "80");
    lv_obj_set_style_text_color(ui_Label_80_kw, lv_color_hex(0xAFB0D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_80_kw, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_80_kw, &ui_font_Number_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_40_kw = lv_label_create(ui_Power_Panel);
    lv_obj_set_width(ui_Label_40_kw, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_40_kw, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_40_kw, 0);
    lv_obj_set_y(ui_Label_40_kw, -70);
    lv_obj_set_align(ui_Label_40_kw, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_40_kw, "40");
    lv_obj_set_style_text_color(ui_Label_40_kw, lv_color_hex(0xAFB0D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_40_kw, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_40_kw, &ui_font_Number_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_20_kw = lv_label_create(ui_Power_Panel);
    lv_obj_set_width(ui_Label_20_kw, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_20_kw, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_20_kw, -55);
    lv_obj_set_y(ui_Label_20_kw, -50);
    lv_obj_set_align(ui_Label_20_kw, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_20_kw, "20");
    lv_obj_set_style_text_color(ui_Label_20_kw, lv_color_hex(0xAFB0D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_20_kw, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_20_kw, &ui_font_Number_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_60_kw = lv_label_create(ui_Power_Panel);
    lv_obj_set_width(ui_Label_60_kw, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_60_kw, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_60_kw, 55);
    lv_obj_set_y(ui_Label_60_kw, -50);
    lv_obj_set_align(ui_Label_60_kw, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_60_kw, "60");
    lv_obj_set_style_text_color(ui_Label_60_kw, lv_color_hex(0xAFB0D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_60_kw, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_60_kw, &ui_font_Number_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_n20_kw = lv_label_create(ui_Power_Panel);
    lv_obj_set_width(ui_Label_n20_kw, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_n20_kw, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_n20_kw, -50);
    lv_obj_set_y(ui_Label_n20_kw, 55);
    lv_obj_set_align(ui_Label_n20_kw, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_n20_kw, "-20");
    lv_obj_set_style_text_color(ui_Label_n20_kw, lv_color_hex(0xAFB0D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_n20_kw, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_n20_kw, &ui_font_Number_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bot_Panel = lv_obj_create(ui_Driving_Screen);
    lv_obj_set_width(ui_Bot_Panel, 240);
    lv_obj_set_height(ui_Bot_Panel, 90);
    lv_obj_set_x(ui_Bot_Panel, 0);
    lv_obj_set_y(ui_Bot_Panel, 115);
    lv_obj_set_align(ui_Bot_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Bot_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Bot_Panel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bot_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Bot_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Bot_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Bot_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Bot_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Bot_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Bot_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Battery_Panel = lv_obj_create(ui_Bot_Panel);
    lv_obj_set_width(ui_Battery_Panel, 115);
    lv_obj_set_height(ui_Battery_Panel, lv_pct(98));
    lv_obj_set_x(ui_Battery_Panel, -40);
    lv_obj_set_y(ui_Battery_Panel, 0);
    lv_obj_set_align(ui_Battery_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Battery_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Battery_Panel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Battery_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Battery_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Battery_Label = lv_label_create(ui_Battery_Panel);
    lv_obj_set_width(ui_Battery_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Battery_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Battery_Label, -40);
    lv_obj_set_y(ui_Battery_Label, -35);
    lv_obj_set_align(ui_Battery_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Battery_Label, "HV");
    lv_obj_set_style_text_color(ui_Battery_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Battery_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Battery_Label, &ui_font_Description, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Cell_Label = lv_label_create(ui_Battery_Panel);
    lv_obj_set_width(ui_Cell_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Cell_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Cell_Label, 0);
    lv_obj_set_y(ui_Cell_Label, -35);
    lv_obj_set_align(ui_Cell_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Cell_Label, "Cell");
    lv_obj_set_style_text_color(ui_Cell_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Cell_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Cell_Label, &ui_font_Description, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Temperature_Label = lv_label_create(ui_Battery_Panel);
    lv_obj_set_width(ui_Temperature_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Temperature_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Temperature_Label, 40);
    lv_obj_set_y(ui_Temperature_Label, -35);
    lv_obj_set_align(ui_Temperature_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Temperature_Label, "Temp");
    lv_obj_set_style_text_color(ui_Temperature_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Temperature_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Temperature_Label, &ui_font_Description, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Battery_Voltage_Bar = lv_bar_create(ui_Battery_Panel);
    lv_bar_set_range(ui_Battery_Voltage_Bar, 250, 420);
    lv_bar_set_value(ui_Battery_Voltage_Bar, 50, LV_ANIM_OFF);
    lv_obj_set_width(ui_Battery_Voltage_Bar, 30);
    lv_obj_set_height(ui_Battery_Voltage_Bar, 60);
    lv_obj_set_x(ui_Battery_Voltage_Bar, -40);
    lv_obj_set_y(ui_Battery_Voltage_Bar, 5);
    lv_obj_set_align(ui_Battery_Voltage_Bar, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Battery_Voltage_Bar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Battery_Voltage_Bar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery_Voltage_Bar, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Battery_Voltage_Bar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Battery_Voltage_Bar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Battery_Voltage_Bar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Battery_Voltage_Bar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Battery_Voltage_Bar, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Battery_Voltage_Bar, lv_color_hex(0x6A699C), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery_Voltage_Bar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Battery_Voltage_Label = lv_label_create(ui_Battery_Voltage_Bar);
    lv_obj_set_width(ui_Battery_Voltage_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Battery_Voltage_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Battery_Voltage_Label, 0);
    lv_obj_set_y(ui_Battery_Voltage_Label, -24);
    lv_obj_set_align(ui_Battery_Voltage_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Battery_Voltage_Label, "350V");
    lv_obj_set_style_text_color(ui_Battery_Voltage_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Battery_Voltage_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Battery_Voltage_Label, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Cell_Voltage_Bar = lv_bar_create(ui_Battery_Panel);
    lv_bar_set_range(ui_Cell_Voltage_Bar, 250, 420);
    lv_bar_set_value(ui_Cell_Voltage_Bar, 50, LV_ANIM_OFF);
    lv_obj_set_width(ui_Cell_Voltage_Bar, 30);
    lv_obj_set_height(ui_Cell_Voltage_Bar, 60);
    lv_obj_set_x(ui_Cell_Voltage_Bar, 0);
    lv_obj_set_y(ui_Cell_Voltage_Bar, 5);
    lv_obj_set_align(ui_Cell_Voltage_Bar, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Cell_Voltage_Bar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Cell_Voltage_Bar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Cell_Voltage_Bar, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Cell_Voltage_Bar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Cell_Voltage_Bar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Cell_Voltage_Bar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Cell_Voltage_Bar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Cell_Voltage_Bar, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Cell_Voltage_Bar, lv_color_hex(0x6A699C), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Cell_Voltage_Bar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Cell_Voltage_Label = lv_label_create(ui_Cell_Voltage_Bar);
    lv_obj_set_width(ui_Cell_Voltage_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Cell_Voltage_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Cell_Voltage_Label, 0);
    lv_obj_set_y(ui_Cell_Voltage_Label, -24);
    lv_obj_set_align(ui_Cell_Voltage_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Cell_Voltage_Label, "3.5V");
    lv_obj_set_style_text_color(ui_Cell_Voltage_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Cell_Voltage_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Cell_Voltage_Label, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Temperature_Bar = lv_bar_create(ui_Battery_Panel);
    lv_bar_set_range(ui_Temperature_Bar, 20, 60);
    lv_bar_set_value(ui_Temperature_Bar, 50, LV_ANIM_OFF);
    lv_obj_set_width(ui_Temperature_Bar, 30);
    lv_obj_set_height(ui_Temperature_Bar, 60);
    lv_obj_set_x(ui_Temperature_Bar, 40);
    lv_obj_set_y(ui_Temperature_Bar, 5);
    lv_obj_set_align(ui_Temperature_Bar, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Temperature_Bar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temperature_Bar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temperature_Bar, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Temperature_Bar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Temperature_Bar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Temperature_Bar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Temperature_Bar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Temperature_Bar, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Temperature_Bar, lv_color_hex(0x6A699C), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temperature_Bar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Cell_Temperatur_Label = lv_label_create(ui_Temperature_Bar);
    lv_obj_set_width(ui_Cell_Temperatur_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Cell_Temperatur_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Cell_Temperatur_Label, 0);
    lv_obj_set_y(ui_Cell_Temperatur_Label, -24);
    lv_obj_set_align(ui_Cell_Temperatur_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Cell_Temperatur_Label, "45°C");
    lv_obj_set_style_text_color(ui_Cell_Temperatur_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Cell_Temperatur_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Cell_Temperatur_Label, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Car_State_Panel = lv_obj_create(ui_Bot_Panel);
    lv_obj_set_width(ui_Car_State_Panel, 70);
    lv_obj_set_height(ui_Car_State_Panel, lv_pct(100));
    lv_obj_set_x(ui_Car_State_Panel, 60);
    lv_obj_set_y(ui_Car_State_Panel, 0);
    lv_obj_set_align(ui_Car_State_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Car_State_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Car_State_Panel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Car_State_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Car_State_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Car_State_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_STB_Panel = lv_obj_create(ui_Car_State_Panel);
    lv_obj_set_width(ui_STB_Panel, 30);
    lv_obj_set_height(ui_STB_Panel, 30);
    lv_obj_set_x(ui_STB_Panel, -15);
    lv_obj_set_y(ui_STB_Panel, 20);
    lv_obj_set_align(ui_STB_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_STB_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_STB_Panel, lv_color_hex(0x159E15), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_STB_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_STB_Label = lv_label_create(ui_STB_Panel);
    lv_obj_set_width(ui_STB_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_STB_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_STB_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_STB_Label, "STB");
    lv_obj_set_style_text_color(ui_STB_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_STB_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_STB_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ERR_Panel = lv_obj_create(ui_Car_State_Panel);
    lv_obj_set_width(ui_ERR_Panel, 30);
    lv_obj_set_height(ui_ERR_Panel, 30);
    lv_obj_set_x(ui_ERR_Panel, -15);
    lv_obj_set_y(ui_ERR_Panel, -15);
    lv_obj_set_align(ui_ERR_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ERR_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ERR_Panel, lv_color_hex(0x9E1515), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ERR_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ERR_Label = lv_label_create(ui_ERR_Panel);
    lv_obj_set_width(ui_ERR_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ERR_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ERR_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ERR_Label, "ERR");
    lv_obj_set_style_text_color(ui_ERR_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ERR_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ERR_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BUZ_Panel = lv_obj_create(ui_Car_State_Panel);
    lv_obj_set_width(ui_BUZ_Panel, 30);
    lv_obj_set_height(ui_BUZ_Panel, 30);
    lv_obj_set_x(ui_BUZ_Panel, 20);
    lv_obj_set_y(ui_BUZ_Panel, 20);
    lv_obj_set_align(ui_BUZ_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BUZ_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BUZ_Panel, lv_color_hex(0x9E1515), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BUZ_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BUZ_Label = lv_label_create(ui_BUZ_Panel);
    lv_obj_set_width(ui_BUZ_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BUZ_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BUZ_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BUZ_Label, "BUZ");
    lv_obj_set_style_text_color(ui_BUZ_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BUZ_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BUZ_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RTD_Panel = lv_obj_create(ui_Car_State_Panel);
    lv_obj_set_width(ui_RTD_Panel, 30);
    lv_obj_set_height(ui_RTD_Panel, 30);
    lv_obj_set_x(ui_RTD_Panel, 20);
    lv_obj_set_y(ui_RTD_Panel, -15);
    lv_obj_set_align(ui_RTD_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RTD_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_RTD_Panel, lv_color_hex(0x159E15), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RTD_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RTD_Label = lv_label_create(ui_RTD_Panel);
    lv_obj_set_width(ui_RTD_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RTD_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RTD_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RTD_Label, "RTD");
    lv_obj_set_style_text_color(ui_RTD_Label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RTD_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RTD_Label, &ui_font_Label, LV_PART_MAIN | LV_STATE_DEFAULT);

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
