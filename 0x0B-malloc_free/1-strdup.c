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
	char *b;
	int n = strlen(str);
	int i;

	if (str == NULL)
		return (NULL);

	b = malloc(n * sizeof(char));
	if (b == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		b[i] = str[i];
	b[i] = '\0';
	return (b);
}
