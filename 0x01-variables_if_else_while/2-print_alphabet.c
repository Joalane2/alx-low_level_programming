#include <stdio.h>

/**
 * main- printing alphabets from A to Z
 *
 * Return: Always 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);
		putchar('\n');
	}
	return (0);
}
