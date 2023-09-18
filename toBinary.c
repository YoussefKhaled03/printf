#include "main.h"

/**
*int_to_binary - convert the unsigned int argument is converted to binary
*@ptr: pointer to function printf
*Return: size of binary
*/

int int_to_binary(va_list *ptr)
{
	unsigned int a = va_arg(*ptr, unsigned int);
	char v[39];
	int i = 0, size = 0;

	if (a == 0)
	{
		_putchar('0');
		return (1);
	}

	while (a)
	{
		v[i] = a % 2 + '0';
		i++;
		a /= 2;
	}
	i--;
	while (i >= 0)
	{
		_putchar(v[i]);
		size++;
		i--;
	}
	return (size);
}
