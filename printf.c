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
	int len;

	len = 0;

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
		while (*format == ' ')
			format++;
		len += print_conv(format, vat);
		format++;
		format++;
	}
	va_end(vat);
	return (len);
}
