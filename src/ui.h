// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Driving_Screen;
extern lv_obj_t * ui_Top_Panel;
extern lv_obj_t * ui_BMS_Panel;
extern lv_obj_t * ui_BMS_Label;
extern lv_obj_t * ui_IMD_Panel;
extern lv_obj_t * ui_IMD_Label;
extern lv_obj_t * ui_HVD_Panel;
extern lv_obj_t * ui_HVD_Label;
extern lv_obj_t * ui_MHL_Panel;
extern lv_obj_t * ui_MHL_Label;
extern lv_obj_t * ui_MHR_Panel;
extern lv_obj_t * ui_MHR_Label;
extern lv_obj_t * ui_Power_Panel;
extern lv_obj_t * ui_Power_Arc;
extern lv_obj_t * ui_Recuperation_Arc;
extern lv_obj_t * ui_Speed_Panel;
extern lv_obj_t * ui_Speed_Label_1;
extern lv_obj_t * ui_Speed_Label_2;
extern lv_obj_t * ui_kmh_Label;
extern lv_obj_t * ui_Label_0_kw;
extern lv_obj_t * ui_Label_80_kw;
extern lv_obj_t * ui_Label_40_kw;
extern lv_obj_t * ui_Label_20_kw;
extern lv_obj_t * ui_Label_60_kw;
extern lv_obj_t * ui_Label_n20_kw;
extern lv_obj_t * ui_Bot_Panel;
extern lv_obj_t * ui_Battery_Panel;
extern lv_obj_t * ui_Battery_Label;
extern lv_obj_t * ui_Cell_Label;
extern lv_obj_t * ui_Temperature_Label;
extern lv_obj_t * ui_Battery_Voltage_Bar;
extern lv_obj_t * ui_Battery_Voltage_Label;
extern lv_obj_t * ui_Cell_Voltage_Bar;
extern lv_obj_t * ui_Cell_Voltage_Label;
extern lv_obj_t * ui_Temperature_Bar;
extern lv_obj_t * ui_Cell_Temperatur_Label;
extern lv_obj_t * ui_Car_State_Panel;
extern lv_obj_t * ui_STB_Panel;
extern lv_obj_t * ui_STB_Label;
extern lv_obj_t * ui_ERR_Panel;
extern lv_obj_t * ui_ERR_Label;
extern lv_obj_t * ui_BUZ_Panel;
extern lv_obj_t * ui_BUZ_Label;
extern lv_obj_t * ui_RTD_Panel;
extern lv_obj_t * ui_RTD_Label;




LV_FONT_DECLARE(ui_font_Description);
LV_FONT_DECLARE(ui_font_kmh);
LV_FONT_DECLARE(ui_font_Label);
LV_FONT_DECLARE(ui_font_Number);
LV_FONT_DECLARE(ui_font_Number_Small);
LV_FONT_DECLARE(ui_font_Small);
LV_FONT_DECLARE(ui_font_Speed);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
