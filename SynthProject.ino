
#include "VoiceAllocation.h"
#include "definitions.h"
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <MIDI\MIDI.h>


void setup() {
  // put your setup code here, to run once:
	MIDI.begin(MIDI_CHANNEL_OMNI);
	setWaveform(osc1, 0);
	setWaveform(osc2, 0);
	vcomixer.gain(0,.25);
	vcomixer.gain(1,.25);
	setADSR(env1,5,20,.3,60);
	setADSR(env2,5,20,.3,60);
}

void loop() {
	// read and interpret MIDI commands
	if (MIDI.read()) {
		int note, velocity, channel;
		byte type = MIDI.getType();
		switch (type) {
		case NoteOn:
			note = MIDI.getData1();
			velocity = MIDI.getData2();
			channel = MIDI.getChannel();
			// allocate note to a voice and play
			voiceAlloc(note, velocity);
			break;
		case NoteOff:
			note = MIDI.getData1();
			velocity = MIDI.getData2();
			channel = MIDI.getChannel();
			// deallocate note and release
			voiceDealloc(note);
			break;
		default:
			break;
		}
	}
}


void setADSR(AudioEffectEnvelope *env[numVoices], float a, float d, float s, float r) {
	for (int i = 0; i < numVoices; i++) {
		env[i]->attack(a);
		env[i]->hold(0);
		env[i]->decay(d);
		env[i]->sustain(s);
		env[i]->release(r);
	}
}

void setWaveform(AudioSynthWaveform *osc[numVoices], int waveform) {
	for (int i = 0; i < numVoices; i++) {
		osc[i]->begin(wave_type[waveform]);
	}
}

