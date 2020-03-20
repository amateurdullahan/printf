#include <stdlib.h>
#include "holberton.h"

/**
 * print_rot13 - converts string using ROT13
 * @arg: va_list argument passed from print_conv
 *
 * Return: count of characters
 */

int print_rot13(va_list arg)
{
  int c, d;
  char alphabet[52] = "ABCDEFGHIJKLMNOPQRSUVWXYZabcdefghijklmnopqrstuvwxyz";
  char rot13[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
  char *s = va_arg(arg, char *);
  char *nil = "(null)";

  if (s == NULL)
    {
      _puts(nil);
    }

  for (c = 0; alphabet[c]; c++)
    {
      for (d = 0; rot13[d]; d++)
	{
	  if (alphabet[c] == rot13[d])
	    {
	      _putchar(rot13[d]);
	      break;
	    }
	  else
	    _putchar(s[c]);
	}
    }
}
