#include <stdio.h>

#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: pointer to the matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum_main = 0;
	long int sum_anti = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += *(a + i * size + i);
	}

	for (i = 0; i < size; i++)
	{
		sum_anti += *(a + i * size + (size - 1 - i));
	}

	printf("%ld, %ld\n", sum_main, sum_anti);
}
