#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 *
 * Return: number of characters in the string
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == 0)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}
