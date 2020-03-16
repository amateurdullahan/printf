#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_conv - takes string and uses correct conversion
 *
 *
 */

int print_conv(const char *str, va_list arg)
{
  int count, c;
  char *s = malloc(sizeof(str));
  count = 0;  
  str++;
  switch (*str)
    {
    case 's':
      s = va_arg(arg, char *);
      if (s == NULL)
	  return (-1);
      else
      _puts(s);
      count += _strlen(s);
      return (count);
    case 'c':
      c = va_arg(arg, int);
      _putchar(c);
      count++;
      return (count);
    case 'd':
      s = _itoa(va_arg(arg, int), s, 10);
      _puts(s);
      count += _strlen(s);
      return (count);
    case 'i':
      s = _itoa(va_arg(arg, int), s, 10);
      _puts(s);
      count += _strlen(s);
      return (count);
    case '%':
      str--;
      _putchar('%');
      count++;
      return (count);
      default:
      _putchar('%');
      count++;
      return (count);
    }
}
