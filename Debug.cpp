#include "Debug.h"

char debugBuffer[256];

void DebugUint32(uint32_t x){
  sprintf(debugBuffer, "%lu", (uint32_t)x);
  Serial.println(debugBuffer);
}

void DebugFloat(float x){
  dtostrf((float)x, 16, 16, debugBuffer);
  Serial.println(debugBuffer);
}
