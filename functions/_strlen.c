#include "holberton.h"

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
