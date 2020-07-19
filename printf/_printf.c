#include "holberton.h"
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int i, count = 0, aux = 0;
	va_list valist;

	va_start(valist, format);
	if (!printf_valid(format))
		return (-1);
	for (i = 0; format[i] != '\0';  i++, count++)
	{
		if (format[i] == '%')
		{
			++i;
			if (format[i] != '%')
			{
				--count;
				aux = printf_struct(format[i])(valist, count);
				count = aux;
			}
			else
				_putchar(format[i]);
		}
		else
			_putchar(format[i]);
	}
	va_end(valist);
	return (count);
}
