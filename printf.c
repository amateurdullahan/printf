#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
#include <unistd.h>


/**
 * _printf - custom printf
 * @format: input string
 * Return: total length of printed string
 */
int _printf(const char *format, ...)
{
  char *s;
  va_list vat;
  int len, c;
  len = -1;
  
  va_start(vat, format);
  while (*format != '\0')
    {
      if (*format != '%')
	{
	  _putchar(*format);
	  format++;
	  len++;
	  continue;
	}
      format++;
      if (*format == '\0')
	break;
      
      switch (*format)
	{
	case 's':
	  s = va_arg(vat, char *);
	  _puts(s);
	  len += _strlen(s);
	  break;
	case 'c':
	  c = va_arg(vat, int);
	  _putchar(c);
	  len++;
	  break;
	case '%':
	  _putchar('%');
	  break;
	default:
	  format--;
	  _putchar('%');
	  len++;	  
	  break;
	}
      format++;
    }
  va_end(vat);
  printf("%d\n", len);
  return (len);
}
