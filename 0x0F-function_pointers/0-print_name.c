#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name of the program to be written
 * @f: another variable
 * Return: always the variable requested
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
