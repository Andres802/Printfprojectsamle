#include "holberton.h"
/**
 * 
 * 
 * 
 * 
 */

int printfchar(char *c, int count)
{
	_putchar(c[0]);
	return (++count);
}

int printfstring(char *str, int count)
{
	int i;

	for (i = 0; str[i] != '\0'; i ++, count++)
	{
		_putchar (str[i]);
	}
	return (count);
}
