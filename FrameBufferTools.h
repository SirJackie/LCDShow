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


#endif
