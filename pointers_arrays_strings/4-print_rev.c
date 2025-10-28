#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: the string to print
 */
void print_rev(char *s)
{
	int len = 0;

	if (s == 0)
	{
		_putchar('\n');
		return;
	}

	while (s[len] != '\0')
		len++;

	while (len > 0)
	{
		len--;

		_putchar(s[len]);
	}

	_putchar('\n');
}
