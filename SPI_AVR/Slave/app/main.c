
#include "../LIB/Types.h"
// #include "../LIB/Macros.h"
#include "../MCAL/DIO/Dio.h"
#include "../MCAL/SPI/Spi.h"
#include "../HAL/Button/Button.h"
#include "../HAL/Led/Led.h"
#include "../HAL/H_Config.h"

void HandlerSpi(u8 data);
void SwControlLed(void);
void SlaveListen(void);

// static u8 receivedFlag = 0;

int main(void)
{
    u8 receivetData;
    u8 status;
    Spi_Init();
    Led_Init(LED_PIN);
    Button_Init(BUTTON_PIN);
    while (1)
    {
        Spi_Transfer(receivetData);
        if (Button_GetState(BUTTON_PIN) == BUTTON_PRESSED)
        {
            status = 'p';
        }
        else
        {
            status = 'r';
        }

        switch (receivetData)
        {
        case 'n':
            Led_TurnOn(LED_PIN);

            break;

        case 'f':
            Led_TurnOff(LED_PIN);
            break;

        case 's':

            Spi_WriteData(status);


        break;

    default:
    /* Do nothing */
        break;
    }
}
}
