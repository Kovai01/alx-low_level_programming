#include "main.h"
#include <stdio.h>

/**
 * print_rev_recursion - prints a string in reverse
 * @s: string parameter
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; ++index)
		;

	for (--index; index >= 0; --index)
		putchar(s[index]);
	putchar('\n');
}
