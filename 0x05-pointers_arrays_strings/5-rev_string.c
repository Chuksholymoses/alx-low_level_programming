#include "main.h"

/**
 * rev_string - output the string in reverse
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i, len, len1;

	char tmp;

	len = 0;

	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len1 len - 1;

	for (i = 0; i < len / 2; len++)
	{
		tmp = s[i];

		s[i] = s[len];

		s[len1--] = tmp;
	}

}
