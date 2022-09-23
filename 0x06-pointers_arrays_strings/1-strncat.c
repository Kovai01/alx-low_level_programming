#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: where array concat
 * Return: destination after appending src
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int c2 = 0, c1 = 0;

	while (dest[c1] != '\0')
	{
		c1++;
	}
	while (c2 < n && src[j] != '\0')
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}
	dest[i] = '\0';
	return (dest);
}
