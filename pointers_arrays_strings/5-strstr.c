#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the big string to search in
 * @needle: the substring to find
 *
 * Return: pointer to first char of first match in haystack
 * or NULL if needle isn't found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
