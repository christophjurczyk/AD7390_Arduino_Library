# AD7390 Arduino Library
[![Compile Examples](https://github.com/christophjurczyk/AD7390_Arduino_Library/workflows/Compile%20Examples/badge.svg)](https://github.com/christophjurczyk/AD7390_Arduino_Library/actions?workflow=Compile+Examples)

A simple Arduino Library for the Analog Devices AD7390 digital-to-analog converter (DAC).

## Usage
To use the library include the header-file and initialize an object as follows:

```c
#include <AD7390.h>

#define DAC_CS 8
AD7390 dac(DAC_CS);
```

To send a new value to the DAC call the following function:

```c
uint16_t value = 1024;
dac.writeValue(value);
```

That's it. There are also some examples available for better understanding.
