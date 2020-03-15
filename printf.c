#include "holberton.h"
#include <stdio.h>

/**
 * _printf - basic func to print a string of characters
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
  int len = 0;  
  int ret = 0;

  len = _strlen(format); 
  write (1, format, len);

  ret = len;
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
