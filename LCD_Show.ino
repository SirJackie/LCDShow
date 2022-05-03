#include "DEV_Config.h"
#include "LCD_Driver.h"

void setup()
{
  System_Init();

  LCD_SCAN_DIR Lcd_ScanDir = SCAN_DIR_DFT;  
  LCD_Init(Lcd_ScanDir, 200);

  LCD_Clear(LCD_BACKGROUND);
}

void loop()
{
  ;
}
