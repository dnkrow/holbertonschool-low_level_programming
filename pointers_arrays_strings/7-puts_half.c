#include "main.h"

/**
 * puts_half - prints the second half of a string
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
		/* longueur paire, on coupe au milieu */
		start = len / 2;
	else
		/* longueur impaire, on saute le caractère central */
		start = (len - 1) / 2 + 1;

	for (idx = start; idx < len; idx++)
		/* affiche uniquement la seconde moitié */
		_putchar(str[idx]);

	_putchar('\n');
}
