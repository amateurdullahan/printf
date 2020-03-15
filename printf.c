#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - basic func to print a string of characters
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
int c, d, f;
char *s;
va_list vat;
f = 0;

 va_start (vat, format);
 while (format[f] != '\0')
   {
     if (format[f] != '%')
       {
	 _putchar(format[f]);
	 f++;
       }
     else
       {
       f++;
     switch (*format)
       {
       case 'c':
	 c = va_arg(vat, int);
	 _putchar(c);
	 break;
       case 's':
	 s = va_arg(vat, char *);
	 for (d = 0; s[d] != '\0'; d++)
	   _putchar(s[d]);
	 break;
       case '%':
	 _putchar('%');
	 break;
       }
       }
   }
 va_end(vat);
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
