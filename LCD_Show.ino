#include "DEV_Config.h"
#include "LCD_Driver.h"

/*******************************************************************************
function:
    Write register data
*******************************************************************************/
static void LCD_Write_AllData(uint16_t Data, uint32_t DataLen)
{
    uint32_t i;
    LCD_DC_1;
    LCD_CS_0;
    for(i = 0; i < DataLen; i++) {
        SPI4W_Write_Byte(Data >> 8);
        SPI4W_Write_Byte(Data & 0XFF);
    }
    LCD_CS_1;
}

void setup()
{
  //-------------
  System_Init();

  LCD_SCAN_DIR Lcd_ScanDir = SCAN_DIR_DFT;  
  LCD_Init(Lcd_ScanDir, 200);
  
//  LCD_Clear(RGB(31, 0, 0));
//  LCD_SetArealColor(0, 0, LCD_WIDTH , LCD_HEIGHT , RGB(31, 0, 0));
  POINT Xstart = 0;
  POINT Ystart = 0;
  POINT Xend = LCD_WIDTH;
  POINT Yend = LCD_HEIGHT;
  COLOR Color = RGB(31, 0, 0);
  if((Xend > Xstart) && (Yend > Ystart)) {
      LCD_SetWindow(Xstart , Ystart , Xend , Yend  );
      LCD_SetColor ( Color , Xend - Xstart, Yend - Ystart);
  }
  //-------------
//  LCD_SetWindow(0, 0, 480, 320);
//  LCD_Write_AllData(RGB(31, 63, 31), 480*320);
}

void loop()
{
  ;
}
