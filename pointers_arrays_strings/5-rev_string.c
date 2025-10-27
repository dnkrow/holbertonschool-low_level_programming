#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int left = 0;
	int right = 0;
	char tmp;

	if (s == 0)
		return;

	while (s[right] != '\0')
		right++;

	right--;
	/* échange les caractères symétriques */
	for (left = 0; left < right; left++, right--)
	{
		tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
	}
}
