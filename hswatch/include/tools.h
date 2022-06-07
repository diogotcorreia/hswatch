#ifndef TOOLS_H
#define TOOLS_H

#include "battery.h"
#include "buzzer.h"
#include "communication.h"
#include "display.h"
#include "led.h"
#include "vibrator.h"

typedef struct timestamp {
	unsigned char hour, minute, second, day, month, week_day;
	unsigned int year;
} timestamp;

const char week_day_name[7][4] = {"DOM", "SEG", "TER", "QUA",
                                  "QUI", "SEX", "SAB"};

timestamp show_time();

#endif
