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
