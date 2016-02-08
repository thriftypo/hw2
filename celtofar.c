#include <stdio.h>

int main ()
{
	float cel, fah;

	printf("\nTemperature in Celsius:");
	scanf("%f", &cel);

	fah = (1.8 * cel) + 32;
	printf("\nTemperature in fahrenheit: %f", fah);
	return (0);

}