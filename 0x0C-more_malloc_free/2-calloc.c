#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: null for fails and pointer for success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *temp;
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	temp = ptr;
	for (i = 0; i < (size * nmemb); i++)
		temp[i] = '\0';
	return (ptr);
}
