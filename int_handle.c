#include "main.h"

/**
 * int_hand - handle the integer
 * @ptr: pointer to the list
 * Return: return the n.
*/
int int_hand(va_list *ptr)
{
	char v[19], i = 0, n = 0;
	long int x = va_arg(*ptr, int);

	if (x == 0)
	{
		_putchar('0');
		return (1);
	} else if (x < 0)
	{
		_putchar('-');
		n++;
		x *= -1;
	}
	while (x)
	{
		v[i++] = x % 10 + '0';
		x /= 10;
	}
	i--;
	while (i >= 0)
	{
		_putchar(v[i]);
		i--;
		n++;
	}
	return (n);
}
