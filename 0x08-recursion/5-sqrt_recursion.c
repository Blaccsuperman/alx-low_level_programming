#include "main.h"


/**
 * hefu - helper function to find sqrt of n
 * @b: number to check if sqrt
 * @c: iteration count
 * Return: sqrt if natural
 */
int hefu(int b, int c)
{
	int sq;

	sq = c * c;
	if (sq == b)
		return (c);
	else if (sq < b)
		return (hefu(b, c + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns square root of n
 * @n: number whose square root is solved
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	return (hefu(n, 1));
}
