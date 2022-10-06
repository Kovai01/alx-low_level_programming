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

	m = malloc(b)
		exit (*m == NULL);
	return(m);
}
