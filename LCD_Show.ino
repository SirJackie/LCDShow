#include "FrameBufferTools.h"
#include "Debug.h"

void setup()
{
  FrameBufferInit();
  DebugInit();
  
  ClearFrameBuffer();

  // Fast Fill Rectangle
  FillRectangle(10, 10, 110, 110, CSRGB(31, 0, 0));

  // Slow Fill Rectangle (using SetPixel())
  for(int y = 120; y < 220; y++){
    for(int x = 10; x < 110; x++){
      SetPixel(x, y, CSRGB(31, 0, 0));
    }
  }
}

void loop()
{
  ;
}
