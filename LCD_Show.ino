#include "DEV_Config.h"
#include "LCD_Driver.h"
//#include "LCD_GUI.h"


#define LCD_BACKGROUND    WHITE   //Default background color
#define FONT_BACKGROUND   WHITE   //Default font background color
#define FONT_FOREGROUND     GRED    //Default font foreground color

#define WHITE          0xFFFF
#define BLACK          0x0000
#define BLUE           0x001F
#define BRED           0XF81F
#define GRED       0XFFE0
#define GBLUE      0X07FF
#define RED            0xF800
#define MAGENTA        0xF81F
#define GREEN          0x07E0
#define CYAN           0x7FFF
#define YELLOW         0xFFE0
#define BROWN        0XBC40
#define BRRED        0XFC07
#define GRAY         0X8430

void setup()
{
  System_Init();

  LCD_SCAN_DIR Lcd_ScanDir = SCAN_DIR_DFT;  
  LCD_Init( Lcd_ScanDir, 200);

  LCD_Clear(LCD_BACKGROUND);

//  GUI_Show();
}

void loop()
{
  ;
}
