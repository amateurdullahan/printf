#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
#include <unistd.h>


/**
 * _printf - custom printf
 * @format: input string
 * Return: total length of printed string
 */
int _printf(const char *format, ...)
{

	va_list vat;
	int len, i;

	len = i = 0;

	if (format == NULL || vat == NULL)
		return (-1);
	va_start(vat, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			format++;
			len++;
			continue;
		}
		else if (*format == '\0')
			break;
		if (*format++ == ' ')
		{
			i++;
			i += spacer(format, i);
			for (; i > 0; i--)
				format++;
		}	
		len += print_conv(format, vat);
		format++;
		format++;
	}
	va_end(vat);
	return (len);
}

int spacer(const char *s, int n)
{
	int i = 0;

	while (*s)
	{
		if (s[n + 1] != ' ')
			return (i);
		n++;
		i++;
	}
	return (0);
}
