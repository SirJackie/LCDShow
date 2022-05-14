#include "FrameBufferTools.h"
#include "Debug.h"

void setup()
{
  FrameBufferInit();
  DebugInit();
  
  LCD_SetWindow(0, 0, LCD_WIDTH, LCD_HEIGHT);
  
  uint16_t Data = RGB(31, 0, 0);
  uint32_t DataLen = (uint32_t)LCD_WIDTH * (uint32_t)LCD_HEIGHT;
  uint32_t i;
  LCD_DC_1;
  LCD_CS_0;
  for(i = 0; i < DataLen; i++) {
      SPI4W_Write_Byte(Data >> 8);
      SPI4W_Write_Byte(Data & 0XFF);
  }
  LCD_CS_1;
}

void loop()
{
  ;
}
