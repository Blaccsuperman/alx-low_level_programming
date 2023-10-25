#include "main.h"

/**
 * factorial - solve the factorial of a given number
 * @n: given number
 * Return: 1 if n=== 0, -1 if n < 0, factorial otherwise
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
				}
