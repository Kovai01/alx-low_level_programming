#include "main.h"
#include <stdio.h>

/**
 * print_rev_recursion - prints a string in reverse
 * @s: string parameter
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
		putchar(*s);
	}
}