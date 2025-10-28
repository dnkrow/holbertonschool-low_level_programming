#include "main.h"

/**
 * puts2 - prints every other character of string
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

		if ((idx % 2) == 0)
			_putchar(str[idx]);
	}

	_putchar('\n');
}
