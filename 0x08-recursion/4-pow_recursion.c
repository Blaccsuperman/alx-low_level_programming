#include "main.h"

/**
 * _pow_recursion - returns x to power y
 * @x: number to evaluated
 * @y: power to be raised to
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
