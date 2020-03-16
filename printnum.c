#include "holberton.h"
#include <stdarg.h>

int printnum(va_list arg)
{
  unsigned int num_Absolute, aux_Num, count_Zero, count;
  int numbers;

  count = 0;

  numbers = va_arg(arg, int);

  if (numbers < 0)
    {
      num_Absolute = (numbers * -1);
      count += _putchar(45);
    }
  else
    num_Absolute = numbers;

  aux_Num = num_Absolute;
  count_Zero = 1;
  while (aux_Num > 9)
    {
      aux_Num /= 10;
      count_Zero *= 10;
    }

  while (count_Zero >= 1)
    {
      count += _putchar(((num_Absolute / count_Zero) % 10) + '0');
      count_Zero /= 10;
    }
  return (count);
}
