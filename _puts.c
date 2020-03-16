#include "holberton.h"

/**
 * _puts - Prints the string using _putchar (hax)
 * @str:  Input string
 * While the string does not equal endline
 * Print string, then advance string
 * After loop, finish with newline
 * Result: The string printed!
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
