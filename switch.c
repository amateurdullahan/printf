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
			return (print_di(str, arg));
		case 'i':
			return (print_di(str, arg));
		case '%':
			str--;
			_putchar('%');
			count++;
			return (count);
		case 'b':
			return (print_b(arg));
		default:
			_putchar('%');
			_putchar(*str);
			count = 2;
			return (count);
	}
}
/**
 * print_di - prints integer value in base 10
 * @str: input string
 * @arg: input argument from list
 * prints result of itoa in base 10
 * Return: length of string
 */
int print_di(const char *str, va_list arg)
{
	char *s = malloc(sizeof(str) * sizeof(arg));
	int count;

	s = _itoa(va_arg(arg, int), s, 10);
	if (s == NULL)
	{
		free(s);
		return (0);
	}
	else
	{
		_puts(s);
		count += _strlen(s);
	}
	free(s);
	return (count);
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
	char *s = malloc(sizeof(str) * sizeof(arg));
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
	free(s);
	return (count);
}

/**
 * print_b - print a binary number
 * @arg: argument passed contating the number to convert
 *
 * Return: number of characters printed
 */

int print_b(va_list arg)
{
	unsigned int c, count, Num, binary, arr[32];

	c = 0, count = 0;
	Num = va_arg(arg, int);

	if (Num < 1)
	{
		_putchar(48);
		count++;
		return (count);
	}
	else
	{
		while (Num > 0)
		{
			binary = Num % 2;
			Num /= 2;
			arr[count] = binary;
			count++;
		}
		c = count - 1;
		while (c > 0)
		{
			_putchar('0' + arr[c]);
			c--;
		}
		_putchar('0' + arr[c]);
	}
	return (count);
}
