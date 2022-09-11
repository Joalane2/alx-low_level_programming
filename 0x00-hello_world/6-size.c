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

	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("size of a long int: %lu byte(s)\n", sizeof(longintType));
	printf("size of a long long int: %lu byte(s)\n",sizeof(longlongintType));
	printf("size of a float: %lu byte(s)\n", sizeof(floatType));
	return(0);
}
