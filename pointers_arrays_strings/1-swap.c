#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	if (a == 0 || b == 0)
		return;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
