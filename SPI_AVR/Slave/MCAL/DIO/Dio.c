

#include "../../LIB/Types.h"
#include "../../LIB/Macros.h"
#include "../../LIB/Registers.h"
#include "Dio.h"




void Dio_SetPinMode(Dio_PortType port, Dio_PinType pin, Dio_ModeType mode) {
    switch (port)
    {
    case DIO_PORTA:
        if (DIO_MODE_OUTPUT == mode) {
            SET_BIT(DDRA, pin);
        }
        else if (DIO_MODE_INPUT_FLOATING == mode) {
            CLR_BIT(DDRA, pin);
            CLR_BIT(PORTA, pin);
        }
        else if (DIO_MODE_INPUT_PULLUP == mode) {
            CLR_BIT(DDRA, pin);
            SET_BIT(PORTA, pin);
        }
        else {
            /* Do Nothing */
        }
        break;
    case DIO_PORTB:
        if (DIO_MODE_OUTPUT == mode) {
            SET_BIT(DDRB, pin);
        }
        else if (DIO_MODE_INPUT_FLOATING == mode) {
            CLR_BIT(DDRB, pin);
            CLR_BIT(PORTB, pin);
        }
        else if (DIO_MODE_INPUT_PULLUP == mode) {
            CLR_BIT(DDRB, pin);
            SET_BIT(PORTB, pin);
        }
        else {
            /* Do Nothing */
        }
        break;
    case DIO_PORTC:
        if (DIO_MODE_OUTPUT == mode) {
            SET_BIT(DDRC, pin);
        }
        else if (DIO_MODE_INPUT_FLOATING == mode) {
            CLR_BIT(DDRC, pin);
            CLR_BIT(PORTC, pin);
        }
        else if (DIO_MODE_INPUT_PULLUP == mode) {
            CLR_BIT(DDRC, pin);
            SET_BIT(PORTC, pin);
        }
        else {
            /* Do Nothing */
        }
        break;
    case DIO_PORTD:
        if (DIO_MODE_OUTPUT == mode) {
            SET_BIT(DDRD, pin);
        }
        else if (DIO_MODE_INPUT_FLOATING == mode) {
            CLR_BIT(DDRD, pin);
            CLR_BIT(PORTD, pin);
        }
        else if (DIO_MODE_INPUT_PULLUP == mode) {
            CLR_BIT(DDRD, pin);
            SET_BIT(PORTD, pin);
        }
        else {
            /* Do Nothing */
        }
        break;
    default:
        break;
    }
}

void Dio_SetPinLevel(Dio_PortType port, Dio_PinType pin, Dio_LevelType level) {
    switch (port)
    {
    case DIO_PORTA:
        if (DIO_LEVEL_HIGH == level) {
            SET_BIT(PORTA, pin);
        }
        else if (DIO_LEVEL_LOW == level) {
            CLR_BIT(PORTA, pin);
        }
        else {
            /* Do Nothing */
        }
        break;
    case DIO_PORTB:
        if (DIO_LEVEL_HIGH == level) {
            SET_BIT(PORTB, pin);
        }
        else if (DIO_LEVEL_LOW == level) {
            CLR_BIT(PORTB, pin);
        }
        else {
            /* Do Nothing */
        }
        break;
    case DIO_PORTC:
        if (DIO_LEVEL_HIGH == level) {
            SET_BIT(PORTC, pin);
        }
        else if (DIO_LEVEL_LOW == level) {
            CLR_BIT(PORTC, pin);
        }
        else {
            /* Do Nothing */
        }
        break;
    case DIO_PORTD:
        if (DIO_LEVEL_HIGH == level) {
            SET_BIT(PORTD, pin);
        }
        else if (DIO_LEVEL_LOW == level) {
            CLR_BIT(PORTD, pin);
        }
        else {
            /* Do Nothing */
        }
        break;
    
    default:
        break;
    }
}



Dio_LevelType Dio_ReadPinLevel (Dio_PortType port, Dio_PinType pin) {
    Dio_LevelType ret_value = DIO_LEVEL_LOW;
    switch (port)
    {
    case DIO_PORTA:
        ret_value = GET_BIT(PINA, pin);
        break;
    case DIO_PORTB:
        ret_value = GET_BIT(PINB, pin);
        break;
    case DIO_PORTC:
        ret_value = GET_BIT(PINC, pin);
        break;
    case DIO_PORTD:
        ret_value = GET_BIT(PIND, pin);
        break;
    default:
        break;
    }
    return ret_value;
}