#include "holberton.h"

/**
 * _printf - basic func to print a string of characters
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format)
{
  int c;
  int return = 0;

  for (c = 0; c < _strlen(format); c++)
    {
      if (format[c] == '%')
	{
	  format[c]++;
	  if (format[c] == 'c')
	    {
	      format[c]++;
	      /* IOTA FUNC HERE */
	    }
	  if (format[c] == 's')
	    {
	      continue;
	    }
	}
      else
	{
	  write (1, &format, 1);
	  return++;
	}
    }
}

/**
 * _strlen - determines length of string
 * @c: string                                              
 *
 * Return: length of string
*/

int _strlen(char *c) 
{
int len;
for (len = 0; c[len]; len++)
;
return (len);
}
