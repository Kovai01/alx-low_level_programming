#include <stdio.h>

/**
* main-Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: 1 byte(s)\n", Sizeof (char));
	printf("Size of an int: 4 byte(s)\n", Sizeof (int));
	printf("Size of a long int: 4 bytes(s)\n", Sizeof (long int));
	printf("Size of a long long int: 8 bytes(s)\n", Sizeof (long long int));
	printf("Size of a float: 4 byte(s)\n", Sizeof (float));
	return (0);
}
