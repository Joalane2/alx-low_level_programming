#include "main.h"

/**
 * *print_last_digit - check the last digit
 * *@ld: number being check
 * * Return: Always 0.
*/

int print_last_digit(int ld)
{
	ld = ld % 10;

	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');
	return (ld);
}
