#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings to n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int len, i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = (unsigned int)_strlen(s1);
	d = malloc((len + n + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	for (i = 0, c = 0; i < (len + n); i++)
	{
		if (i < len)
			d[i] = s1[i];
		else
			d[i] = s2[c++];
	}
	d[i] = '\0';

	return (d);
}

#include "main.h"
#include <stdio.h>
/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

