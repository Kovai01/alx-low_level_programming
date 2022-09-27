#include "main.h"
/**
*_strchr - Returns a pointer to the first occurence
* the first n bytes of the memory area
* pointed to by s with the constant byte b
* @s: string targeted
* @c: character targeted
* Return: returns new value of target
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; (s[i] != c) && (s[1] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
