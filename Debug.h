#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <HardwareSerial.h>

extern char debugBuffer[256];

#define DebugInit() Serial.begin(9600)
#define DebugString(str) Serial.println(str)
void DebugUint32(uint32_t x);
void DebugFloat(float x);

#endif
