/*
 * software_timer.h
 *
 *  Created on: Nov 13, 2023
 *      Author: HELLO
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "global.h"

extern uint8_t trfLight0_timer_flag;
extern uint8_t trfLight1_timer_flag;
extern uint8_t blinking_timer_flag;
extern uint8_t changeLED_timer_flag;

extern int trfLight0_timer_counter;
extern int trfLight1_timer_counter;

void setTimer_trfLight0(int);
void setTimer_trfLight1(int);
void auto_setTimer_trfLight(uint8_t);
void setTimerBlinking(int);
void setTimer_changing_LED_on(int);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
