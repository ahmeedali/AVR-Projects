#include "Led.h"

void Led_Init (Dio_PortType port, Dio_PinType pin) {
    Dio_SetPinMode(port, pin, DIO_MODE_OUTPUT);
}

void Led_TurnOn (Dio_PortType port, Dio_PinType pin) {
    Dio_SetPinLevel(port, pin, DIO_LEVEL_HIGH);
}

void Led_TurnOff (Dio_PortType port, Dio_PinType pin) {
    Dio_SetPinLevel(port, pin, DIO_LEVEL_LOW);
}
