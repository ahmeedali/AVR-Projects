#ifndef SPI_H_
#define SPI_H_

#include "../../LIB/Types.h"
#include "../../LIB/Macros.h"
#include "../../LIB/Registers.h"
#include "../../MCAL/DIO/Dio.h"


#define SPI_PIN_SS      DIO_PORTB,DIO_PIN4
#define SPI_PIN_MOSI    DIO_PORTB,DIO_PIN5
#define SPI_PIN_MISO    DIO_PORTB,DIO_PIN6
#define SPI_PIN_SCK     DIO_PORTB,DIO_PIN7


void Spi_Init(void);
u8 Spi_Transfer(u8 data);
void Spi_WriteData(u8 data);

#endif