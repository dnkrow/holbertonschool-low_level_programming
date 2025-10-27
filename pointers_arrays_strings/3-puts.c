#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: the string to print
 */
void _puts(char *str)
{
	int idx = 0;

	if (str == 0)
	{
		_putchar('\n');
		return;
	}

	/* écrit chaque caractère jusqu'au zéro final */
	while (str[idx] != '\0')
	{
		_putchar(str[idx]);
		idx++;
	}

	/* saute une ligne pour terminer proprement */
	_putchar('\n');
}
