// VoiceAllocation.h

#ifndef _VOICEALLOCATION_h
#define _VOICEALLOCATION_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

void voiceAlloc(int note, int velocity);
void voiceDealloc(int note);

#endif

