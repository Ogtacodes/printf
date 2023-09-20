#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produce output according to format
 * @format: is a character of a string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int i, counter = 0;
	va_list args;
	char c, *s;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = (char)va_arg(args, int);
				putchar(c);
				counter++;
			}
			else if (format[i] == '%')
			{
				putchar('%');
			}
			else if (format[i] == 's')
			{
				s = va_arg(args, char *);
				while (*s)
				{
					putchar(*s);
					s++;
					counter++;
				}
			}
		}
		else
		{
			putchar(format[i]);
			counter++;
		}
	}
	return (39);
}
