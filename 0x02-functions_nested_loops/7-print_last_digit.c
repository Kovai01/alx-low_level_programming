#include "main.h"

/**
 * print_last_digit - prints the last dgits or the integers
 * @n: Numbers last numbers needed to be printed
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = n * -1;

	m = n % 10;

	if (m < 0)
		m = m * -1;

	_putchar(m + '0');

	return (m);
}
