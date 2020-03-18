#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

int _printf(const char *format, ...);

int _strlen(char *c);

void _swap(char *x, char *y);

char *_reverse(char *buffer, int i, int j);

int _abs(int a);

char *_itoa(int value, char *buffer, int base);

int _putchar(char c);

void _puts(char *str);

int print_conv(const char *str, va_list arg);

int print_s(const char *str, va_list arg);

int print_b(va_list arg);

int spacer(const char *s, int n);

int print_di(const char *str, va_list arg);

#endif /* HOLBERTON_H */
