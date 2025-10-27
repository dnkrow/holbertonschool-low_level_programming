#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the input string
 *
 * Return: converted integer, or 0 if no digits are found
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int started = 0;
	int idx = 0;
	char current;

	if (s == 0)
		return (0);

	while ((current = s[idx]) != '\0')
	{
		/* chaque signe - inversant le signe avant les chiffres */
		if (current == '-')
		{
			if (!started)
				sign *= -1;
			else
				break;
		}
		else if (current == '+')
		{
			/* ignore + dès que la lecture des chiffres a commencé */
			if (started)
				break;
		}
		else if (current >= '0' && current <= '9')
		{
			/* décale les anciens chiffres et ajoute le nouveau */
			started = 1;
			result = (result * 10) + (current - '0');
		}
		else if (started)
		{
			/* un caractère non numérique termine la conversion */
			break;
		}
		idx++;
	}

	if (!started)
		return (0);

	if (sign < 0)
		return (-((int)result));

	return ((int)result);
}
