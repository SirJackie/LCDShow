#include "FrameBufferTools.h"
#include "Debug.h"

void setup()
{
  FrameBufferInit();
  DebugInit();
  
  FillRectangle(0, 0, screenWidthSaver, screenHeightSaver, CSRGB(31, 63, 31));
}

void loop()
{
  ;
}
