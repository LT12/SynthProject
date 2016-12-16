// 
// 
// 
// Methods to enable polyphonic MIDI
#include "VoiceAllocation.h"
#include "definitions.h"

const int numVoices = 4; // maximum number of supported voices
int voiceArray[numVoices] = {0,0,0,0};
int voiceptr = 0; // index of next assignable voice
int activeVoices = 0;

// allocate and turn on note
void voiceAlloc(int note, int velocity) {
	// if voice not available steal oldest voice
	if (voiceArray[voiceptr] != 0) {
		voiceptr = (voiceptr - (numVoices - 1)) % (numVoices);
	}
	else {
		activeVoices++;
	}
	voiceArray[voiceptr] = note;
	osc1[voiceptr]->frequency(note2frequency[note]);
	osc2[voiceptr]->amplitude(velocity2amplitude[velocity]);
	env1[voiceptr]->noteOn();
	env2[voiceptr]->noteOn();
	voiceptr = (voiceptr + 1) % (numVoices);
}

// deallocate and turn off note
void voiceDealloc(int note) {
	for (int i = 0; i < numVoices; i++) {
		if (voiceArray[i] == note) {
			voiceArray[i] = 0;
			env1[i]->noteOff();
			env2[i]->noteOff();
			activeVoices--;
			return;
		}
	}
}