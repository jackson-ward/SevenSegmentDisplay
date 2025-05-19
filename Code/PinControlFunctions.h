#pragma once
#include "PinDefinitions.h"

void display_1()
{
	digitalWrite(PIN_DECODER_A0, LOW);
	digitalWrite(PIN_DECODER_A1, LOW);
	digitalWrite(PIN_DECODER_A2, LOW);
}

void display_2()
{
	digitalWrite(PIN_DECODER_A0, HIGH);
	digitalWrite(PIN_DECODER_A1, LOW);
	digitalWrite(PIN_DECODER_A2, LOW);
}

void display_3()
{
	digitalWrite(PIN_DECODER_A0, LOW);
	digitalWrite(PIN_DECODER_A1, HIGH);
	digitalWrite(PIN_DECODER_A2, LOW);
}

void display_4()
{
	digitalWrite(PIN_DECODER_A0, HIGH);
	digitalWrite(PIN_DECODER_A1, HIGH);
	digitalWrite(PIN_DECODER_A2, LOW);
}

void display_5()
{
	digitalWrite(PIN_DECODER_A0, LOW);
	digitalWrite(PIN_DECODER_A1, LOW);
	digitalWrite(PIN_DECODER_A2, HIGH);
}

void display_6()
{
	digitalWrite(PIN_DECODER_A0, HIGH);
	digitalWrite(PIN_DECODER_A1, LOW);
	digitalWrite(PIN_DECODER_A2, HIGH);
}

void display_7()
{
	digitalWrite(PIN_DECODER_A0, LOW);
	digitalWrite(PIN_DECODER_A1, HIGH);
	digitalWrite(PIN_DECODER_A2, HIGH);
}

void display_8()
{
	digitalWrite(PIN_DECODER_A0, HIGH);
	digitalWrite(PIN_DECODER_A1, HIGH);
	digitalWrite(PIN_DECODER_A2, HIGH);
}

void clear_segments()
{
	pinMode(PIN_SEGMENT_A, INPUT);
	pinMode(PIN_SEGMENT_B, INPUT);
	pinMode(PIN_SEGMENT_C, INPUT);
	pinMode(PIN_SEGMENT_D, INPUT);
	pinMode(PIN_SEGMENT_E, INPUT);
	pinMode(PIN_SEGMENT_F, INPUT);
	pinMode(PIN_SEGMENT_G, INPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_zero()
{
	pinMode(PIN_SEGMENT_A, OUTPUT);
	pinMode(PIN_SEGMENT_B, OUTPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, OUTPUT);
	pinMode(PIN_SEGMENT_E, OUTPUT);
	pinMode(PIN_SEGMENT_F, OUTPUT);
	pinMode(PIN_SEGMENT_G, INPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_one()
{
	pinMode(PIN_SEGMENT_A, INPUT);
	pinMode(PIN_SEGMENT_B, OUTPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, INPUT);
	pinMode(PIN_SEGMENT_E, INPUT);
	pinMode(PIN_SEGMENT_F, INPUT);
	pinMode(PIN_SEGMENT_G, INPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_two()
{
	pinMode(PIN_SEGMENT_A, OUTPUT);
	pinMode(PIN_SEGMENT_B, OUTPUT);
	pinMode(PIN_SEGMENT_C, INPUT);
	pinMode(PIN_SEGMENT_D, OUTPUT);
	pinMode(PIN_SEGMENT_E, OUTPUT);
	pinMode(PIN_SEGMENT_F, INPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_three()
{
	pinMode(PIN_SEGMENT_A, OUTPUT);
	pinMode(PIN_SEGMENT_B, OUTPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, OUTPUT);
	pinMode(PIN_SEGMENT_E, INPUT);
	pinMode(PIN_SEGMENT_F, INPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_four()
{
	pinMode(PIN_SEGMENT_A, INPUT);
	pinMode(PIN_SEGMENT_B, OUTPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, INPUT);
	pinMode(PIN_SEGMENT_E, INPUT);
	pinMode(PIN_SEGMENT_F, OUTPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_five()
{
	pinMode(PIN_SEGMENT_A, OUTPUT);
	pinMode(PIN_SEGMENT_B, INPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, OUTPUT);
	pinMode(PIN_SEGMENT_E, INPUT);
	pinMode(PIN_SEGMENT_F, OUTPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_six()
{
	pinMode(PIN_SEGMENT_A, OUTPUT);
	pinMode(PIN_SEGMENT_B, INPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, OUTPUT);
	pinMode(PIN_SEGMENT_E, OUTPUT);
	pinMode(PIN_SEGMENT_F, OUTPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_seven()
{
	pinMode(PIN_SEGMENT_A, OUTPUT);
	pinMode(PIN_SEGMENT_B, OUTPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, INPUT);
	pinMode(PIN_SEGMENT_E, INPUT);
	pinMode(PIN_SEGMENT_F, INPUT);
	pinMode(PIN_SEGMENT_G, INPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_eight()
{
	pinMode(PIN_SEGMENT_A, OUTPUT);
	pinMode(PIN_SEGMENT_B, OUTPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, OUTPUT);
	pinMode(PIN_SEGMENT_E, OUTPUT);
	pinMode(PIN_SEGMENT_F, OUTPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_nine()
{
	pinMode(PIN_SEGMENT_A, OUTPUT);
	pinMode(PIN_SEGMENT_B, OUTPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, OUTPUT);
	pinMode(PIN_SEGMENT_E, INPUT);
	pinMode(PIN_SEGMENT_F, OUTPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_A()
{
	pinMode(PIN_SEGMENT_A, OUTPUT);
	pinMode(PIN_SEGMENT_B, OUTPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, INPUT);
	pinMode(PIN_SEGMENT_E, OUTPUT);
	pinMode(PIN_SEGMENT_F, OUTPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_B()
{
	pinMode(PIN_SEGMENT_A, INPUT);
	pinMode(PIN_SEGMENT_B, INPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, OUTPUT);
	pinMode(PIN_SEGMENT_E, OUTPUT);
	pinMode(PIN_SEGMENT_F, OUTPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_C()
{
	pinMode(PIN_SEGMENT_A, INPUT);
	pinMode(PIN_SEGMENT_B, INPUT);
	pinMode(PIN_SEGMENT_C, INPUT);
	pinMode(PIN_SEGMENT_D, OUTPUT);
	pinMode(PIN_SEGMENT_E, OUTPUT);
	pinMode(PIN_SEGMENT_F, INPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_D()
{
	pinMode(PIN_SEGMENT_A, INPUT);
	pinMode(PIN_SEGMENT_B, OUTPUT);
	pinMode(PIN_SEGMENT_C, OUTPUT);
	pinMode(PIN_SEGMENT_D, OUTPUT);
	pinMode(PIN_SEGMENT_E, OUTPUT);
	pinMode(PIN_SEGMENT_F, INPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_E()
{
	pinMode(PIN_SEGMENT_A, OUTPUT);
	pinMode(PIN_SEGMENT_B, INPUT);
	pinMode(PIN_SEGMENT_C, INPUT);
	pinMode(PIN_SEGMENT_D, OUTPUT);
	pinMode(PIN_SEGMENT_E, OUTPUT);
	pinMode(PIN_SEGMENT_F, OUTPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}

void draw_F()
{
	pinMode(PIN_SEGMENT_A, OUTPUT);
	pinMode(PIN_SEGMENT_B, INPUT);
	pinMode(PIN_SEGMENT_C, INPUT);
	pinMode(PIN_SEGMENT_D, INPUT);
	pinMode(PIN_SEGMENT_E, OUTPUT);
	pinMode(PIN_SEGMENT_F, OUTPUT);
	pinMode(PIN_SEGMENT_G, OUTPUT);
	pinMode(PIN_SEGMENT_DP, INPUT);
}
