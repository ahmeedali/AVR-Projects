#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO/Dio.h"

typedef enum {
    BUTTON_RELEASED,
    BUTTON_PRESSED
} Button_StateType;


void Button_Init(Dio_PortType port, Dio_PinType pin);
Button_StateType Button_GetState(Dio_PortType port, Dio_PinType pin);

#endif