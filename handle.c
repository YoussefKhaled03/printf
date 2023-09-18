#include "main.h"

/**
 * handle_format_specifier - handling the format specifier
 * @c: the charachter
 * @ptr: the pointer to the string
 *
 * Return: the size of the string 0.
*/

int handle_format_specifier(char c, va_list *ptr)
{
	int size = 0;

	if (c == '%')
		size += _putchar('%');
	else if (c == 's')
		size += _putstring(va_arg(*ptr, char *));
	else if (c == 'c')
		size += _putchar(va_arg(*ptr, int));
	else if (c == 'd' || c == 'i')
		size += int_hand(ptr);
	else if (c == 'b')
		size += int_to_binary(ptr);
	else
		size += _putchar('%') + _putchar(c);
	return (size);
}
