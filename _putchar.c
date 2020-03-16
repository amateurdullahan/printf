#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes char to stdout
 * @c: input char
 * Return: Char printed to stdout;
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
