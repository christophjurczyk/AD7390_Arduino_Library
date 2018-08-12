/* --------------------------------------------------------------
	Arduino Library for the Analog Devives AD7390 12-bit DAC
	
	Author: Christoph Jurczyk
	Version: 1.0

	Changelog:
		1.0		12.08.2018:		Initial Upload
 
 -------------------------------------------------------------- */

#ifndef AD7390_H
#define AD7390_H

#include "Arduino.h"

class AD7390
{
public:
	AD7390(int cs_pin);
	void writeValue(uint16_t value);
private:
	int _cs_pin;
};

#endif
