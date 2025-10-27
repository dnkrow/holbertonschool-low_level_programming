#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to process
 */
void puts2(char *str)
{
	int idx;

	if (str == 0)
	{
		_putchar('\n');
		return;
	}

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		/* ne garde que les indices pairs */
		if ((idx % 2) == 0)
			_putchar(str[idx]);
	}

	_putchar('\n');
}
