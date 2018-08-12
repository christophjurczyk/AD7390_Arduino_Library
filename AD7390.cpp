/* --------------------------------------------------------------
	Arduino Library for the Analog Devives AD7390 12-bit DAC
	
	Author: Christoph Jurczyk
 -------------------------------------------------------------- */

#include "Arduino.h"
#include "AD7390.h"
#include <SPI.h>

// initialization
AD7390::AD7390(int cs_pin)
{
	// init chip select pin
	pinMode(cs_pin, OUTPUT);
	digitalWrite(cs_pin, LOW);
	_cs_pin = cs_pin;
	
	// init SPI
	SPI.begin();
	SPI.setDataMode(SPI_MODE3);
	SPI.setBitOrder(MSBFIRST);
}

// function to write value to DAC
void AD7390::writeValue(uint16_t value)
{
	// select chip
    digitalWrite(_cs_pin, HIGH);
    // transfer data
    uint8_t higher =  uint8_t((value >> 8));
    uint8_t lower = value & 0x00FF;
    SPI.transfer(higher);
    SPI.transfer(lower);
    // deselect chip
    digitalWrite(_cs_pin, LOW);
}
