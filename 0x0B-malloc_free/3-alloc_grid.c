#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to 2D array
 *
 * @width: width of the 2D array.
 * @height: height of the 2D array.
 *
 * Return: NULL for width or height <= 0 or if code fails;
 *	return pointer if successful
 */
int **alloc_grid(int width, int height)
{
	int **_2D;
	int hindex, windex;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2D = malloc(sizeof(int *) * height);

	if (_2D == NULL)
		return (NULL);

	for (hindex = 0; hindex < height; hindex++)
	{
		_2D[hindex] = malloc(sizeof(int) * width);

		if (_2D[hindex] == NULL)
		{
			for (; hindex >= 0; hindex--)
				free(_2D[hindex]);

			free(_2D);
			return (NULL);
		}
	}

	for (hindex = 0; hindex < height; hindex++)
	{
		for (windex = 0; windex < width; windex++)
			_2D[hindex][windex] = 0;
	}

	return (_2D);
}
