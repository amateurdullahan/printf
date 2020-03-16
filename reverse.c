#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _reverse - Reverses buffer[i..j]
 * @buffer: buffer to be reversed
 * @i: first spot to begin reversal
 * @j: ending spot
 * Return: pointer to reversed buffer
 */
char *_reverse(char *buffer, int i, int j)
{
	while (i < j)
		_swap(&buffer[i++], &buffer[j--]);
	return (buffer);
}
