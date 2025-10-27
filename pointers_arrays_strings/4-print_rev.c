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

	/* mesure la longueur pour partir de la fin */
	while (s[len] != '\0')
		len++;

	while (len > 0)
	{
		len--;
		/* remonte caractère par caractère */
		_putchar(s[len]);
	}

	_putchar('\n');
}
