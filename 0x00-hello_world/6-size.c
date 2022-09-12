#include <stdio.h>

/**
 *main - Determining the sizes of the variables
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
	char charType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("size of a long int: %ld byte(s)\n", sizeof(longintType));
	printf("size of a long long int: %d byte(s)\n", sizeof(longlongintType));
	printf("size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
