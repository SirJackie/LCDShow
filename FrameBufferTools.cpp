#include "FrameBufferTools.h"

int screenWidthSaver;
int screenHeightSaver;

void FrameBufferInit(){
  System_Init();
  LCD_SCAN_DIR Lcd_ScanDir = SCAN_DIR_DFT;
  LCD_Init(Lcd_ScanDir, 200);
  SaveScreenSize(LCD_WIDTH, LCD_HEIGHT);
}

void FillRectangle(int x0, int y0, int x1, int y1, int color){
  
  // Clamp the Start Point
  x0 < 0 ? x0 = 0 : NULL;
  x0 > screenWidthSaver ? x0 = screenWidthSaver : NULL;
  y0 < 0 ? y0 = 0 : NULL;
  y0 > screenHeightSaver ? y0 = screenHeightSaver : NULL;

  // Clamp the End Point
  x1 < 0 ? x0 = 0 : NULL;
  x1 > screenWidthSaver ? x0 = screenWidthSaver : NULL;
  y1 < 0 ? y0 = 0 : NULL;
  y1 > screenHeightSaver ? y0 = screenHeightSaver : NULL;

  // Set Filling Rectangle
  LCD_SetWindow(x0, y0, x1, y1);

  // Calculate the Sending Length
  uint32_t dataLen = (uint32_t)(x1 - x0) * (uint32_t)(y1 - y0);

  // Send "Start to Fill" Signal
  LCD_DC_1;
  LCD_CS_0;

  // Fill
  for(uint32_t i = 0; i < dataLen; i++) {
      SPI4W_Write_Byte(color >> 8);
      SPI4W_Write_Byte(color & 0XFF);
  }

  // Send "End Filling" Signal
  LCD_CS_1;
  
}
