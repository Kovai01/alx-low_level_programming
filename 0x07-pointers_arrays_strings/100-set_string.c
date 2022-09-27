#include "main.h"
/**
*set_string -  a function that set the value of a pointer to a char
* @s:pointer value
*@to:value pointed to
*/
void set_string(char **s, char *to)
{
	*s = to;
}
