#include "main.h"

/**
 * _strcpy - copies a string to the destination buffer
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	if (dest == 0 || src == 0)
		return (dest);

	/* recopie chaque caractère jusqu'au zéro */
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	/* ajoute le zéro terminal à la fin */
	dest[idx] = '\0';

	return (dest);
}
