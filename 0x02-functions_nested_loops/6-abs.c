#include "main.h"

/**
*_abs - function to check absolute value of a number
*@abs: - number to check absolute value of
*Return: 0
*/

int _abs(int abs)
{
	if (abs < 0)
	{
		return (-abs);
	}
	else
	{
		return (abs);
	}
	return (0);
}
