#include <stdio.h>
int main(void)

/**
 * Main - Entry point
 * Determining the sizes of the variable
 * Return 0 (success)
 */
{
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
	char charType;

	printf("Size of a char: %d byte(s)\n",(unsigned long)sizeof(charType));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(intType));
	printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(longintType));
	printf("size of a long long int: %d byte(s)\n", (unsigned long)sizeof(longlongintType));
	printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(floatType));
	return(0);
}
