#include "main.h"

/**
 * puts_half - prints the second half of string
 * @str: string to process
 */
void puts_half(char *str)
{
	int len = 0;
	int start, idx;

	if (str == 0)
	{
		_putchar('\n');
		return;
	}

	while (str[len] != '\0')
		len++;

	if ((len % 2) == 0)

		start = len / 2;
	else

		start = (len - 1) / 2 + 1;

	for (idx = start; idx < len; idx++)

		_putchar(str[idx]);

	_putchar('\n');
}
