#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the value to be printed
 * Return: Always 0 success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
