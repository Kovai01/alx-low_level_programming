#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns length of string
 * @s: string parameter
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	_strlen_recursion(s + 1);
		putchar(*s);
	}
	Return (0)
}
