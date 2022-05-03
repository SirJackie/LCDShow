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

char strBuf[256];

void SerialPrintInt(uint32_t x){
  sprintf(strBuf, "%d", (uint32_t)x);
  Serial.println(strBuf);
}

void setup()
{
  //-------------
  System_Init();

  LCD_SCAN_DIR Lcd_ScanDir = SCAN_DIR_DFT;  
  LCD_Init(Lcd_ScanDir, 200);
  
  LCD_SetWindow(0, 0, LCD_WIDTH, LCD_HEIGHT);
  LCD_Write_AllData(RGB(31, 0, 0), (uint32_t)LCD_WIDTH * (uint32_t)LCD_HEIGHT);

  
  SerialPrintInt((uint32_t)LCD_WIDTH);
  SerialPrintInt((uint32_t)LCD_HEIGHT);
  SerialPrintInt((uint32_t)LCD_WIDTH * (uint32_t)LCD_HEIGHT);
}

void loop()
{
  ;
}
