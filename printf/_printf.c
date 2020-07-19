#include "holberton.h"
#include <stdio.h>
/**
 * 
 * 
 * 
 */
int _printf(const char *format, ...)
{
	int i;
	int (*ptr)(char *, int);

	if (!printf_valid(format))
	{
		_putchar('e');
			return (-1);
	}
	for (i = 0; format[i] != '\0';  i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			i++;
			_putchar('%');
		}
		else
			_putchar(format[i]);
	}
	
}
