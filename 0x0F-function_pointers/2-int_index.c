#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - finds index of given number
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to comparison function
 *
 * Return: -1 if no element matches or if size<= 0, otherwise i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
			return (i);
	}

	return (-1);

}
