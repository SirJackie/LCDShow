#ifndef __FRAME_BUFFER_TOOLS_H__
#define __FRAME_BUFFER_TOOLS_H__

#include "LCD_Driver.h"

#define CSRGB(r,g,b) ( ((r&31) << 11) + ((g&63) << 5) + (b&31) )

extern int screenWidthSaver;
#define SaveScreenWidth(screenWidth_) (screenWidthSaver = screenWidth_)
extern int screenHeightSaver;
#define SaveScreenHeight(screenHeight_) (screenHeightSaver = screenHeight_)

#define SaveScreenSize(w, h) (SaveScreenWidth(w), SaveScreenHeight(h))

void FrameBufferInit();
//void FillRectangle(int x0, int y0, int x1, int y1, int color);


#endif
