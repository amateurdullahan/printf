#include "holberton.h"

/**
 * _printf - basic func to print a string of characters
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
  int count, len;
  int ret = 0;

  len = _strlen(format);

  for (count = 0; count < len; count++)
    {
	  write (1, &format, len);
	  ret++;
    }
  return (ret);
}

/**
 * _strlen - determines length of string
 * @c: string                                              
 *
 * Return: length of string
*/

int _strlen(const char *c) 
{
int len;
for (len = 0; c[len]; len++)
;
return (len);
}
