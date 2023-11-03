#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - creates memory allocation using malloc
 * @b: nummber of charcters or ints
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
