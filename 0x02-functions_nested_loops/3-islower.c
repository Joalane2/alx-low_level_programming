#include "main.h"

/**
*_islower - checks for lowercase alphabets
*
*@c: - parameter accepted by _islower
*
*Return: Always 0
*/
int _islower(int c)
{
	if (c >= 98 && c <= 122)
		return (1);
	else
		return (0);
}
