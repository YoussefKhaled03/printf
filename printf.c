#include "main.h"

/**
 * _printf - it's the base boooyy
 * @format: pointer to the input
 * Return: the size.
*/

int _printf(const char *format, ...)
{
	int size = 0, i;
	va_list ptr;

	va_start(ptr, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			size += _putchar(format[i]);
		}
		else
		{
			i++;
			while (format[i] == ' ')
			{
				size += _putchar(format[i]);
				i++;
			}
			if (format[i] == '\0')
				break;
			size += handle_format_specifier(format[i], &ptr);
		}
	}
	va_end(ptr);
	return (size);
}
