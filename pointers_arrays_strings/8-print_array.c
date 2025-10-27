#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an integer array
 * @a: the array of integers
 * @n: how many elements to print
 */
void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", a[idx]);
		if (idx < n - 1)
			/* ajoute virgule et espace entre les nombres */
			printf(", ");
	}

	/* termine par un retour à la ligne */
	printf("\n");
}
