#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns length of string
 * @s: string parameter
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int len = 0

	if (*s != '\0')
	{
		len++;
		len +=_strlen_recursion(s + 1);
		{
		putchar(*s);
		}
	}
	return (0);
}
