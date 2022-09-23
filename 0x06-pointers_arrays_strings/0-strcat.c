#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * Return: destination after appending src
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[1] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
