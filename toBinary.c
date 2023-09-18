#include "main.h"

/**
 * int_to_binary - convert the unsigned int argument is converted to binary
 * @ptr: pointer to function printf
 * Return: size of binary 
*/

int int_to_binary(va_list *ptr)
{
	unsigned int a = va_arg(*ptr, unsigned int);
	char v[39];
	int i = 0, size=0;
	while (a)
	{
		v[i] = a % 2;
		i++;
		a /= 2;
	}
	i--;
	for (i;i>=0;i--)
	{
		_putchar(v[i]);
		size++;
	}
	return (size);
}

int main(void)
{
	_printf("%b", 4);
}
