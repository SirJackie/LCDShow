#ifndef __FRAME_BUFFER_TOOLS_H__
#define __FRAME_BUFFER_TOOLS_H__

#include "LCD_Driver.h"

// RGB Generator
#define CSRGB(r,g,b) ( ((r&31) << 11) + ((g&63) << 5) + (b&31) )

// Screen Width and Height Savers
extern int screenWidthSaver;
#define SaveScreenWidth(screenWidth_) (screenWidthSaver = screenWidth_)
extern int screenHeightSaver;
#define SaveScreenHeight(screenHeight_) (screenHeightSaver = screenHeight_)
#define SaveScreenSize(w, h) (SaveScreenWidth(w), SaveScreenHeight(h))

// Methods
void FrameBufferInit();
void FillRectangle(int x0, int y0, int x1, int y1, int color);
#define ClearFrameBuffer() (FillRectangle(0, 0, screenWidthSaver, screenHeightSaver, CSRGB(31, 63, 31)))
#define SetPixel(x, y, color) (LCD_SetWindow(x, y, x, y), LCD_DC_1, LCD_CS_0, SPI4W_Write_Byte(color >> 8), SPI4W_Write_Byte(color & 0XFF), LCD_CS_1)

#endif
