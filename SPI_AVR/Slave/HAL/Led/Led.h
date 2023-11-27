#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO/Dio.h"


void Led_Init (Dio_PortType port, Dio_PinType pin);
void Led_TurnOn (Dio_PortType port, Dio_PinType pin);
void Led_TurnOff (Dio_PortType port, Dio_PinType pin);


#endif