#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	if (a == 0 || b == 0)
		return;

	/* garde la première valeur de côté */
	tmp = *a;
	/* place la seconde valeur dans le premier emplacement */
	*a = *b;
	/* remet la valeur temporaire dans le second */
	*b = tmp;
}
