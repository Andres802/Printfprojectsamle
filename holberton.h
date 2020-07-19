#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * 
 * 
 * 
 */
typedef struct op
{
	char *data;
	int (*func)(char *a, int b);
} data_t;

int _putchar(char c);
int printfchar(char *c, int count);
int printfstring(char *str, int count);
int _printf(const char *format, ...);
int printf_valid(const char *format);
int (*printf_struct(char s))(char*, int);

#endif
