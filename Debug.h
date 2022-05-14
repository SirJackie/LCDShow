#ifndef __DEBUG_H
#define __DEBUG_H
#include <Wire.h>

#define DEV_DEBUG 0
#if DEV_DEBUG
	#define DEBUG(__info) Serial.print(__info)
#else
	#define DEBUG(__info)  
#endif

#endif
