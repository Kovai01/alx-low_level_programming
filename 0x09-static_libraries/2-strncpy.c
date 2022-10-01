#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy and overwrite strings
 * @dest: the final copied string
 * @src: the string to copy
 * @n: where array src stops cpying
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
