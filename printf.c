#include "holberton.h"

/**
 * _printf - basic func to print a string of characters
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
  int c;
  int len = 0;  
  int ret = 0;

  len = _strlen(format); 
  for (c = 0; format[c]; c++)
    {
      _putchar(format[c]);
    }

  ret = c;
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

int _putchar(char c)
{
  return (write(1, &c, 1));
}
