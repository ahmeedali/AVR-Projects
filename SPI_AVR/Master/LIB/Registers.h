#ifndef INC_REGISTERS_H_
#define INC_REGISTERS_H_

#include "Types.h"

/************** PORTA Registers **************/
#define DDRA		*((volatile u8*) 0x3A)
#define PORTA		*((volatile u8*) 0x3B)
#define PINA		*((const volatile u8*) 0x39)

/************* PORTB Registers *************/
#define DDRB		*((volatile u8*) 0x37)
#define PORTB		*((volatile u8*) 0x38)
#define PINB		*((const volatile u8*) 0x36)

/************* PORTC Registers *************/
#define DDRC		*((volatile u8*) 0x34)
#define PORTC		*((volatile u8*) 0x35)
#define PINC		*((const volatile u8*) 0x33)

/************* PORTD Registers *************/
#define DDRD		*((volatile u8*) 0x31)
#define PORTD		*((volatile u8*) 0x32)
#define PIND		*((const volatile u8*) 0x30)

/************* SPI *************/
#define SPCR        *((volatile u8*) 0x2D)
#define SPSR		*((volatile u8*) 0x2E)
#define SPDR		*((volatile u8*) 0x2F)



#endif