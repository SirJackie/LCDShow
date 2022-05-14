#include "FrameBufferTools.h"

int screenWidthSaver;
int screenHeightSaver;

void FrameBufferInit(){
  System_Init();
  LCD_SCAN_DIR Lcd_ScanDir = SCAN_DIR_DFT;
  LCD_Init(Lcd_ScanDir, 200);
  SaveScreenSize(LCD_WIDTH, LCD_HEIGHT);
}
