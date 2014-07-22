#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bbblackc.h"

int gpio_init(int GPIO, char* direction)
{

	FILE* gpio = NULL;
	FILE* direction_f = NULL;
	FILE* value = NULL;
	char gpio_path[200];
	char gpio_direction[200];
	gpio = fopen("/sys/class/gpio/export", "w");
	if(gpio == NULL)
	{
		return -1;
	}
	fprintf(gpio, "%d", GPIO);
	fclose(gpio);
	
	char gpio_c[4];
	sprintf(gpio_c, "%d", GPIO);

	strcpy(gpio_path, "/sys/class/gpio/gpio");
	strcat(gpio_path, gpio_c);

	strcpy(gpio_direction, gpio_path);
	strcat(gpio_direction,"/direction");
	printf("%s \n", gpio_direction);
	direction_f = fopen(gpio_direction, "w");
	if(direction_f == NULL)
	{	
		return -1;
	}

	fprintf(direction_f, "%s", direction);
	fclose(direction_f);
	return 0;
}
int gpio_clean(int GPIO)
{
	FILE* gpio = NULL;
	gpio = fopen("/sys/class/gpio/unexport", "w");
	if(gpio == NULL)
	{
		return 0;
	}
	fprintf(gpio, "%d", GPIO);
	fclose(gpio);
	return 1;
}
int gpio_set(int GPIO, int value)
{
	FILE* value_f = NULL;
	
	char value_path[200];
	char gpio_c[4];
	
	sprintf(gpio_c, "%d", GPIO);
	strcpy(value_path, "/sys/class/gpio/gpio");
	strcat(value_path, gpio_c);
	strcat(value_path, "/value");
	value_f = fopen(value_path, "w");
	if(value_f == NULL)
	{
		return -1;
	}
	fprintf(value_f, "%d", value);
	fclose(value_f);
	return 0;
}