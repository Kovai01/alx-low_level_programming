#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: value for allocation
 * return: always 0
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
		if (m == NULL)
			exit(98);
	return (m);
}
