#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produce output according to format
 * @format: is a character of a string
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int i;

	va_list args;
	va_start(args, format);
	char c, *s;

	for(i = 0; format i == '/0'; i++)
	{
		if(format [i] == '%')
		{
			i++;
			if(format [i] == 'c' || format [i] == '%')
			{
				c = (char)va_arg(args, int);
				putchar(c);
				
			}
			else if(format [i] == 's')
			{
				
			}
		}
	}


}
