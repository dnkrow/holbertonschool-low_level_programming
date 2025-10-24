#include "main.h"

/**
 * times_table - Print the 9 times table starting from 0.
 */
void times_table(void)
{
	int row;
	int col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int prod = row * col;

			if (col == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
				{
					_putchar(' ');
					_putchar(prod + '0');
				}
				else
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}

