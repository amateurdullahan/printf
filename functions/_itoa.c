#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _itoa - converts integer to string
 * @value: value to be converted to a string.
 * @buffer: array to store the resulting null-terminated string.
 * @base: numerical base used to represent the value as a string
 * between 2 & 36.
 * Return: A pointer to the resulting null-terminated string, same as buffer
 */
char *_itoa(int value, char *buffer, int base)
{
	int i = 0;
	/* consider absolute value of number */
	int n = _abs(value);
	int r;

	/* invalid input */
	if (base < 2 || base > 32)
		return (buffer);
	while (n)
	{
		r = n % base;
		if (r >= 10)
			buffer[i++] = 65 + (r - 10);
		else
			buffer[i++] = 48 + r;
		n = n / base;
	}
	/* if number is 0 */
	if (i == 0)
		buffer[i++] = '0';
	/*
	 * If base is 10 & value is negative, the resulting string
	 * is preceded with a minus sign (-)
	 * With any other base, value is always considered unsigned
	 */
	if (value < 0 && base == 10)
		buffer[i++] = '-';
	buffer[i] = '\0'; /* terminator */
	/* reverse the string & return it */
	return (_reverse(buffer, 0, i - 1));

}
