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
  /* char *s;*/
  va_list vat;
  int len;
  len = -1;
  
  if (format == NULL)
    {
      return (0);
    }
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
      else if (*format == '\0')
	break;
      else
	{
	len += print_conv(format, vat);
	format++;
	}
      format++;    
    }
  va_end(vat);

  return (len);
}
