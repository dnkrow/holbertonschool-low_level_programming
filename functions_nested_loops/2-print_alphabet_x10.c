#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	int row;
	char ch;

	for (row = 0; row < 10; row++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
