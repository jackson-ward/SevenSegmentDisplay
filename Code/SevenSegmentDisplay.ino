/*
 Name:		SevenSegmentDisplay.ino
 Created:	5/9/2025 10:02:38 AM
 Author:	jward
*/
#include "PinControlFunctions.h"
#include "PinDefinitions.h"

#define RANDOM_UNSIGNED_INT ((rand() & 0x7fffu) << 17 | (rand() & 0x7fffu) << 2) | (rand() & 0x7fffu) >> 13;

#define DISABLE_DECODER digitalWrite(PIN_DECODER_ENABLE, LOW)
#define ENABLE_DECODER digitalWrite(PIN_DECODER_ENABLE, HIGH)

typedef void (*FuncPtr)();

enum class DisplayStates
{
	ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, A, B, C, D, E, F, OFF
};

FuncPtr draw_functions[17] = { draw_zero, draw_one, draw_two, draw_three, draw_four, draw_five, draw_six, draw_seven, draw_eight,
	draw_nine, draw_A, draw_B, draw_C, draw_D, draw_E, draw_F, clear_segments};

FuncPtr decoder_functions[8] = { display_1, display_2, display_3, display_4, display_5, display_6, display_7, display_8 };

DisplayStates _display_states[8] = { DisplayStates::OFF, DisplayStates::OFF, DisplayStates::OFF, DisplayStates::OFF,
								DisplayStates::OFF, DisplayStates::OFF, DisplayStates::OFF, DisplayStates::OFF };

// the setup function runs once when you press reset or power the board
void setup() {
	pinMode(PIN_DECODER_ENABLE, OUTPUT);
	pinMode(PIN_DECODER_A0, OUTPUT);
	pinMode(PIN_DECODER_A1, OUTPUT);
	pinMode(PIN_DECODER_A2, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	static int position = 0;
	static uint32_t delayms = 2;
	static uint32_t startTimeForUpdate, startTimeForDisplay = 0;

	if ((millis() - startTimeForUpdate) > 5000)
	{
		updateDisplayValue();
		startTimeForUpdate = millis();
	}

	if ((millis() - startTimeForDisplay) >= delayms)
	{
		DISABLE_DECODER;
		decoder_functions[position]();
		draw_functions[(int)_display_states[position]]();
		ENABLE_DECODER;
		++position;
		if (position > 7) position = 0;
		startTimeForDisplay = millis();
	}
}

void updateDisplayValue()
{
	unsigned int newVal = RANDOM_UNSIGNED_INT;
	_display_states[0] = (DisplayStates)((newVal >> 28) & 0x0000000F);
	_display_states[1] = (DisplayStates)((newVal >> 24) & 0x0000000F);
	_display_states[2] = (DisplayStates)((newVal >> 20) & 0x0000000F);
	_display_states[3] = (DisplayStates)((newVal >> 16) & 0x0000000F);
	_display_states[4] = (DisplayStates)((newVal >> 12) & 0x0000000F);
	_display_states[5] = (DisplayStates)((newVal >>  8) & 0x0000000F);
	_display_states[6] = (DisplayStates)((newVal >>  4) & 0x0000000F);
	_display_states[7] = (DisplayStates)(newVal & 0x0000000F);
}

