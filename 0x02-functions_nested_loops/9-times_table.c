#include "main.h"

/**
 * * times_table - prints the 9 times table
 * *
 * *
*/

void times_table(void)
{
	int x, y, times;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			times = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
			{
				_putchar('0');
			}
			else if (times >= 10)
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			else if ((times < 10) && (y != 0))
			{
				_putchar(' ');
				_putchar((times % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
