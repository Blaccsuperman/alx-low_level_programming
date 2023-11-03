#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates array in range min to max
 * @min: smallest number in array
 * @max: largest number in range
 *
 * Return: pointer to array if success, null otherwise.
 */
int *array_range(int min, int max)
{
	int *grid, i, range;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	grid = malloc(sizeof(int) * range);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		grid[i] = min++;

	return (grid);
}
