#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns pointe to copy of string
 * @str: string to be duplicated
 *
 * Return: pointer to new string or null if unsuccesful
 */
char *_strdup(char *str)
{
	char *s;
	int n = strlen(str);
	int i;

	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	else if (str == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
