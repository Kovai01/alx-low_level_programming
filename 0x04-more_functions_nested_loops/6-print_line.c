#include <stdio.h>
#include "main.h"
/**
 * print_line - it draws line on a terminal
 * @n: is the number of times the character is printed
 * line should end with \n
 * if n = 0 or less, only \n is printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n && n > 0)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
