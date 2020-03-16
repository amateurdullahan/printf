#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _swap - Swaps two numbers
 * @x: first number
 * @y: second number
 */
void _swap(char *x, char *y)
{
	char t = *x;
	*x = *y;
	*y = t;
}
