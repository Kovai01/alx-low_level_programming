#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * puts2 - prints every other character
 * @str: string parameter
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	{
		if (i % 4 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
