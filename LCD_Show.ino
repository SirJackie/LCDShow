#include "FrameBufferTools.h"
#include "Debug.h"

void setup()
{
  FrameBufferInit();
  DebugInit();
  
  ClearFrameBuffer();
  FillRectangle(10, 10, 110, 110, CSRGB(31, 0, 0));
  FillRectangle(20, 20, 120, 120, CSRGB(31, 31, 0));
  FillRectangle(30, 30, 130, 130, CSRGB(31, 0, 31));
  FillRectangle(40, 40, 140, 140, CSRGB(0, 31, 0));
  FillRectangle(50, 50, 150, 150, CSRGB(0, 0, 31));
  FillRectangle(60, 60, 160, 160, CSRGB(0, 0, 0));
  FillRectangle(70, 70, 170, 170, CSRGB(0, 31, 31));
}

void loop()
{
  ;
}
