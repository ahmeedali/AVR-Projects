

#include "Button.h"

void Button_Init(Dio_PortType port, Dio_PinType pin) {
    Dio_SetPinMode(port, pin, DIO_MODE_INPUT_PULLUP);}



Button_StateType Button_GetState(Dio_PortType port, Dio_PinType pin) {
    Button_StateType ret_value = BUTTON_RELEASED;

    if (Dio_ReadPinLevel(port, pin) == DIO_LEVEL_LOW)

    {
        ret_value = BUTTON_PRESSED;
    }
    return ret_value;
}