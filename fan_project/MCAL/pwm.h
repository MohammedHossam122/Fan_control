/*
 * pwm.h
 *
 *  Created on: May 8, 2023
 *      Author: mhoss
 */

#ifndef PWM_H_
#define PWM_H_

#include "../std_types.h"

/***************************************************************************************************
 *                                		Definitions                                  			   *
 ***************************************************************************************************/

#define PWM_MAX_VALUE			255

/***************************************************************************************************
 *                                	Function Prototype                                  		   *
 ***************************************************************************************************/

/*
 * Description :
 * Function responsible to calculate the ON_time of PWM with the duty cycle.
 */
void PWM_Timer0_Start(uint8 duty_cycle);

#endif /* PWM_H_ */
