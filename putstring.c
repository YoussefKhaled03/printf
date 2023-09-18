#include "main.h"

/**
 * _putstring- function print string
 * @s: string that will print
 * Return: size of string
 */

int _putstring(char *s)
{
	int i;

	if (!s)
		return (_putstring("(null)"));
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * _reverse_string- rev string func
 * @s: string that will reverse
 * Return: size of string
 */

int _reverse_string(char *s)
{
	int i;
	int n;


	if (!s)
		return (_putstring("(null)"));
	i = 0;
	while (s[i])
	{
		i++;
	}
	n = i;
	i--;
	while (i >= 0)
	{
		_putchar(s[i--]);
	}
	return (n);
}
