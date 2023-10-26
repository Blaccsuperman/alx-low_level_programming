#include "main.h"


/**
 * _sqrt - return square root of number
 * @b: number
 * @i: number incrementer acting as divisor
 * Return: square root of `b`
 */

int _sqrt(int b, int i)
{
	int square;

	square = i * i;
	if (square >= b)
		return (i);
	else
		return (_sqrt(b, i + 1));
}

/**
 * herp - helper function
 * @n: number given to original function is_prime_number
 * @p: increment
 * Return: 0 if not prime, 1 if prime
 */

int herp(int n, int p)
{
	if (n % p == 0)
		return (0);
	else if (_sqrt(n, 1) < p)
		return (1);
	else
		return (herp(n, p + 1));
}
/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (herp(n, 2));
}
