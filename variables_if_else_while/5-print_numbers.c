#include <stdio.h>

/**
 * main - digit numbers of base 10 starting from 0, followed by a new line
 * Return: always 0
 */

int main(void)
{

	char digit;

	for (digit = '0'; digit <= '9' ; digit++)
	{
		putchar(digit);

	}

	putchar('\n');
	return (0);
}
