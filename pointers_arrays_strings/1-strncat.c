#include "main.h"

/**
 * _strncat - appends at most n bytes of src to dest
 * @dest: buffer to append to
 * @src: string to copy from
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
