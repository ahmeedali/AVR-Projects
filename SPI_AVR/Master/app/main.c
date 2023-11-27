
#include "../LIB/Types.h"
#include "../MCAL/SPI/Spi.h"


void HandlerSpi(u8 data);
void SwControlLed(void);
void SlaveListen(void);

// static u8 receivedFlag = 0;

int main(void)
{
    Spi_Init();
   // Spi_Transfer('s');
   
}

