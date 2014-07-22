## BBBlackC

BBBlackC is a C library for easy access to the Beaglebone Black GPIOs.

For now, it only support GPIOs, but it will soon support the PWM, SPI, UART ....

### Instructions

If you want to use BBlackC, you just need to add its path into your compiling command.

Typically:
```
gcc foo.c include/bbblackc.c -o foo
```

And you must add his header into your file.
```
#include "include/bbblackc.h"
```

You must have access to /sys/class folder when you execute your program. 
### Using BBBlackC

#### GPIO

Before you can use your GPIO you need to initialize it.

	int gpio_init(int GPIO, char* direction);

**GPIO** : Your GPIO in the "P0_00" format, you can also use its ID.  
**direction** : OUT/IN

**Example**
```
# Initialize P8_14 as output
 gpio_init(P8_14, OUT);
```

After that, you can pull-up and pull-down it with
```
int gpio_set(int GPIO, int value);
```
**GPIO** : Your GPIO in the "P0_00" format, you can also use its ID.  
**value** : HIGH/LOW or 1/0 as you want.

**Example**
```
#set P8_14 to HIGH
gpio_set(P8_14, HIGH);
```
At the end of your program, you need to cleanup your GPIO.

```
int gpio_unset(GPIO);
```
**GPIO** : Your GPIO in the "P0_00" format, you can also use its ID.  

### Example
##### Blinking LED
```
#include <stdio.h>
#include <stdlib.h>

#include "include/bbblackc.h"

int main()
{
	gpio_init(P8_16, OUT);
	for(int i =0; i<10;i++)
	{
		gpio_set(P8_16, LOW);
		sleep(1);	
		gpio_set(P8_16, HIGH);
		sleep(1);	
	}
	gpio_unset(P8_16);
	return 0;
}
```