// definitions.h
#include <Audio.h>

#ifndef _DEFINITIONS_h
#define _DEFINITIONS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

const short wave_type[5] =
{
	WAVEFORM_SINE,
	WAVEFORM_SQUARE,
	WAVEFORM_SAWTOOTH,
	WAVEFORM_TRIANGLE,
};

const float note2frequency[128] =
{
	8.1758,    8.6620,    9.1770,    9.7227,    10.3009,    10.9134,    11.5623,    12.2499,
	12.9783,   13.7500,   14.5676,   15.4339,   16.3516,    17.3239,    18.3540,    19.4454,
	20.6017,   21.8268,   23.1247,   24.4997,   25.9565,    27.5000,    29.1352,    30.8677,
	32.7032,   34.6478,   36.7081,   38.8909,   41.2034,    43.6535,    46.2493,    48.9994,
	51.9131,   55.0000,   58.2705,   61.7354,   65.4064,    69.2957,    73.4162,    77.7817,
	82.4069,   87.3071,   92.4986,   97.9989,   103.8262,   110.0000,   116.5409,   123.4708,
	130.8128,  138.5913,  146.8324,  155.5635,  164.8138,   174.6141,   184.9972,   195.9977,
	207.6523,  220.0000,  233.0819,  246.9417,  261.6256,   277.1826,   293.6648,   311.1270,
	329.6276,  349.2282,  369.9944,  391.9954,  415.3047,   440.0000,   466.1638,   493.8833,
	523.2511,  554.3653,  587.3295,  622.2540,  659.2551,   698.4565,   739.9888,   783.9909,
	830.6094,  880.0000,  932.3275,  987.7666,  1046.5023,  1108.7305,  1174.6591,  1244.5079,
	1318.5102, 1396.9129, 1479.9777, 1567.9817, 1661.2188,  1760.0000,  1864.6550,  1975.5332,
	2093.0045, 2217.4610, 2349.3181, 2489.0159, 2637.0205,  2793.8259,  2959.9554,  3135.9635,
	3322.4376, 3520.0000, 3729.3101, 3951.0664, 4186.0090,  4434.9221,  4698.6363,  4978.0317,
	5274.0409, 5587.6517, 5919.9108, 6271.9270, 6644.8752,  7040.0000,  7458.6202,  7902.1328,
	8372.0181, 8869.8442, 9397.2726, 9956.0635, 10548.0818, 11175.3034, 11839.8215, 12543.8540
};

const float velocity2amplitude[127] = {
	0.01778,0.01966,0.02164,0.02371,0.02588,0.02814,0.03049,0.03294,0.03549,0.03812,
	0.04086,0.04369,0.04661,0.04963,0.05274,0.05594,0.05924,0.06264,0.06613,0.06972,
	0.07340,0.07717,0.08104,0.08500,0.08906,0.09321,0.09746,0.10180,0.10624,0.11077,
	0.11539,0.12011,0.12493,0.12984,0.13484,0.13994,0.14513,0.15042,0.15581,0.16128,
	0.16685,0.17252,0.17828,0.18414,0.19009,0.19613,0.20227,0.20851,0.21484,0.22126,
	0.22778,0.23439,0.24110,0.24790,0.25480,0.26179,0.26887,0.27605,0.28333,0.29070,
	0.29816,0.30572,0.31337,0.32112,0.32896,0.33690,0.34493,0.35306,0.36128,0.36960,
	0.37801,0.38651,0.39511,0.40381,0.41260,0.42148,0.43046,0.43953,0.44870,0.45796,
	0.46732,0.47677,0.48631,0.49595,0.50569,0.51552,0.52544,0.53546,0.54557,0.55578,
	0.56609,0.57648,0.58697,0.59756,0.60824,0.61902,0.62989,0.64085,0.65191,0.66307,
	0.67432,0.68566,0.69710,0.70863,0.72026,0.73198,0.74380,0.75571,0.76771,0.77981,
	0.79201,0.80430,0.81668,0.82916,0.84174,0.85440,0.86717,0.88003,0.89298,0.90602,
	0.91917,0.93240,0.94573,0.95916,0.97268,0.98629,1.00000
};


// GUItool: begin automatically generated code
AudioSynthWaveform       osc1_3; //xy=171,329
AudioSynthWaveform       osc1_2; //xy=173,286
AudioSynthWaveform       osc1_1; //xy=174,242
AudioSynthWaveform       osc1_4; //xy=174,370
AudioSynthWaveform       osc2_3; //xy=174,618
AudioSynthWaveform       osc2_2; //xy=175,578
AudioSynthWaveform       osc2_4; //xy=175,663
AudioSynthWaveform       osc2_1; //xy=176,536
AudioEffectEnvelope      envelope5; //xy=326,526
AudioEffectEnvelope      envelope1;      //xy=328.5,241.5
AudioEffectEnvelope      envelope6; //xy=328.5,572.5
AudioEffectEnvelope      envelope7; //xy=329.5,615.5
AudioEffectEnvelope      envelope8; //xy=329.5,661.5
AudioEffectEnvelope      envelope2;      //xy=331,288
AudioEffectEnvelope      envelope3;      //xy=332,331
AudioEffectEnvelope      envelope4;      //xy=332,377
AudioMixer4              mixer1;         //xy=481.5,306.5
AudioMixer4              mixer2; //xy=481,598
AudioMixer4              vcomixer;       //xy=622,450
AudioOutputUSB           usb1;           //xy=914.25,392.5
AudioOutputAnalog        dac1;           //xy=931.75,504.75
AudioConnection          patchCord1(osc1_3, envelope3);
AudioConnection          patchCord2(osc1_2, envelope2);
AudioConnection          patchCord3(osc1_1, envelope1);
AudioConnection          patchCord4(osc1_4, envelope4);
AudioConnection          patchCord5(osc2_3, envelope7);
AudioConnection          patchCord6(osc2_2, envelope6);
AudioConnection          patchCord7(osc2_4, envelope8);
AudioConnection          patchCord8(osc2_1, envelope5);
AudioConnection          patchCord9(envelope5, 0, mixer2, 0);
AudioConnection          patchCord10(envelope1, 0, mixer1, 0);
AudioConnection          patchCord11(envelope6, 0, mixer2, 1);
AudioConnection          patchCord12(envelope7, 0, mixer2, 2);
AudioConnection          patchCord13(envelope8, 0, mixer2, 3);
AudioConnection          patchCord14(envelope2, 0, mixer1, 1);
AudioConnection          patchCord15(envelope3, 0, mixer1, 2);
AudioConnection          patchCord16(envelope4, 0, mixer1, 3);
AudioConnection          patchCord17(mixer1, 0, vcomixer, 0);
AudioConnection          patchCord18(mixer2, 0, vcomixer, 1);
AudioConnection          patchCord19(vcomixer, usb1, 0);
AudioConnection          patchCord19(vcomixer, usb1, 1);
AudioConnection          patchCord19(vcomixer, dac1);

// GUItool: end automatically generated code


AudioSynthWaveform *osc1[4] = {
	&osc1_1, &osc1_2, &osc1_3, &osc1_4
};

AudioSynthWaveform *osc2[4] = {
	&osc2_1, &osc2_2, &osc2_3, &osc2_4
};

AudioEffectEnvelope *env1[4] = {
	&envelope1, &envelope2, &envelope3, &envelope4,
};

AudioEffectEnvelope *env2[4] = {
	&envelope5, &envelope6, &envelope7, &envelope8,
};


#endif

