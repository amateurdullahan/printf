#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * print_conv - takes string and uses correct conversion
 * @str: input string
 * @arg: input argument from list
 * goes through switch cases;
 * Return: count
 */

int print_conv(const char *str, va_list arg)
{
	int count, c;
	char *s = malloc(sizeof(str));

	count = c = 0;
	str++;
	switch (*str)
	{
		case 's':
			return (print_s(str, arg));
		case 'c':
			c = va_arg(arg, int);
			_putchar(c);
			count++;
			return (count);
		case 'd':
			s = _itoa(va_arg(arg, int), s, 10);
			_puts(s);
			count += _strlen(s);
			return (count);
		case 'i':
			s = _itoa(va_arg(arg, int), s, 10);
			_puts(s);
			count += _strlen(s);
			return (count);
		case '%':
			str--;
			_putchar('%');
			count++;
			return (count);
		default:
			_putchar('%');
			_putchar(*str);
			count = 2;
			return (count);
	}
}
/**
 * print_s - prints string after conversion specifier
 * @str: input string
 * @arg: input argument from list
 * prints string, as long as it's not null
 * Return: length of string
 */
int print_s(const char *str, va_list arg)
{
	char *s = malloc(sizeof(str));
	int count;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		free(s);
		return (0);
	}
	else
	{
	_puts(s);
	count = _strlen(s);
	}
	return (count);
}
