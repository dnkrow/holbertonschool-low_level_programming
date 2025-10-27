#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle using the character '#'
 * @size: the height and width of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (row = 1; row <= size; row++)
		{

			for (space = size - row; space > 0; space--)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
