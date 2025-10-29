#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the input string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, res = 0;
	int seen_digit = 0;

	while (s[i] != '\0' && !seen_digit)
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
			seen_digit = 1;

		if (!seen_digit)
			i++;
	}
}
