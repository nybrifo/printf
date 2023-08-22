#include "main.h"
/**
 * _printf - A function that mimics the printf's behaviour for %s
 *  @format: Constant pointer parameter
 *  Return: (0) always
 */
int _printf(const char *format, ...)
{
va_list my_list;
int _chars = 0;
va_start(my_list, format);

while (*format)
{
if (*format != '%')
	write(1, format, 1);
else
{
	format++;
if (*format == '\0')
	break;
if (*format == 's')
{
char *string = va_arg(my_list, char*);

int length = 0;

while (string[length] != '\0')
{
	length++;
}
	write(1, string, length);
	_chars += length;
}
}
format++;
}
va_end(my_list);
return (_chars);
}
