#ifndef TMR3_H_
#define TMR3_H_

#include "gpio.h"					//we use gpio

//hardware configuration
//end hardware configuration

//global defines
#define TMRMR_EINT		0x01		//interrupt on match
#define TMRMR_RESET		0x02		//reset on match
#define TMRMR_STOP		0x04		//stop on match
//global variables


//reset timer0 with prescaler
void tmr3_init(uint32_t prescaler);

//set match + mode - ch 0
void tmr3_setpr0(uint32_t match);

//install user handler for ch 0
void tmr3_act0(void (*isr_ptr)(void));

//set match + mode - ch 1
void tmr3_setpr1(uint32_t match);

//install user handler for ch 1
void tmr3_act1(void (*isr_ptr)(void));

//set match + mode - ch 2
void tmr3_setpr2(uint32_t match);

//install user handler for ch 2
void tmr3_act2(void (*isr_ptr)(void));

//set match + mode - ch 3
void tmr3_setpr3(uint32_t match);

//install user handler for ch 3
void tmr3_act3(void (*isr_ptr)(void));

#endif /* tmr3_H_ */
