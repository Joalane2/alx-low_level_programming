#include "main.h"

/**
*print_alphabet_x10 - print alphabets 10 times
*
*Return: Always 0
*/

void print_alphabet_x10(void)
{
	int x=0;
	while(x < 10)
	{    
		char alpha;

		for (alpha = 'a'; alpha < = 'z'; alpha++)

		{
		  _putchar(alpha);
		}
		 _putchar('\n');
		 x++;
	}
}
