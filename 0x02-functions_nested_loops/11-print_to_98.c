#include "main.h"

/**
 * print_to_98 - prints numbers
 * @n: first number to be counted
 * description: print all natural integer to 98
 * Return: returns the result of the addition
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
