#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies two strings
 * @dest: destination
 * @src: source
 * @n: where array concat
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (*src != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
