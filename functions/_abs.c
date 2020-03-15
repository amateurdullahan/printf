#include "holberton.h"

/**
 * _abs - printing absolute value of integer
 * @a: character to check for value
 * If a is greater than 0, return a.
 *
 * Else, multiply a by itself, then subtract itself once (to get positive)
 * Return: prints absolute value of numbers
 */
int _abs(int a)
	{

	if (a >= 0)
	return (a);

	else
	return (a - (a * 2));
}
