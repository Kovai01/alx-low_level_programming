#include "main.h"

/**
 * print_numbers - FUnction to print numbers in string
 * Return: Function returns 0 - Success
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');

	return (0);
}
