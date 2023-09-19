#include "main.h"

/**
 * rot_str - rot13
 * @s: the char
 * Return: size of strig
 */

int rot_str(char *s)
{
	int i;

	if (!s)
		return (_putstring("(null)"));
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if (s[i] - 'A' < 13)
				_putchar(s[i] + 13);
			else
				_putchar(s[i] - 13);
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i] - 'a' < 13)
				_putchar(s[i] + 13);
			else
				_putchar(s[i] - 13);
		}
		else
			_putchar(s[i]);
	}
		return (i);
}

