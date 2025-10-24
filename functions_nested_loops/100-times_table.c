#include "main.h"

/**
 * print_cell - Print a formatted product cell.
 * @prod: The value to print.
 */
static void print_cell(int prod)
{
	if (prod < 100)
		_putchar(' ');
	if (prod < 10)
		_putchar(' ');
	if (prod >= 100)
	{
		_putchar((prod / 100) + '0');
		_putchar((prod / 10 % 10) + '0');
	}
	else if (prod >= 10)
	{
		_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
}

/**
 * print_times_table - Print the times table up to n, starting at 0.
 * @n: The maximum multiplier (must be between 0 and 15 inclusive).
 */
void print_times_table(int n)
{
	int row, col;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			int prod = row * col;

			if (col == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				print_cell(prod);
			}
		}
		_putchar('\n');
	}
}
