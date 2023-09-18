#ifndef UNTITLED2_MAIN_H
#define UNTITLED2_MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _putstring(char *s);
int handle_format_specifier(char format_specifier, va_list *ptr);
int int_hand(va_list *ptr);
#endif
