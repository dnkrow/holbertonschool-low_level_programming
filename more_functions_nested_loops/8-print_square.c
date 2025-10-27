#include "main.h"

/**
 * print_square - prints a square using the character '#'
 * @size: size of the square (number of '#' per line and number of lines)
 *
 * Return: void
 */
void print_square(int size)
{
	int row, col; /* row = lignes, col = colonnes */

	if (size <= 0) /*si la taille est <= 0 on imprime juste un saut de ligne*/
	{
		_putchar('\n'); /* affiche un simple retour a la ligne*/
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#'); /* imprime le charactere # une fois par colonne*/
			}

			_putchar('\n');
		}
	}
}
