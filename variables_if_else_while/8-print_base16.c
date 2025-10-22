#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * Return: always 0
 */

int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
		putchar('0' + n);


	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
