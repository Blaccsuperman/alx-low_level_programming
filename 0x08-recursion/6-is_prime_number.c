#include "main.h"

/**
 * is_prime_number - checks if number is prime
 * @n: number to be checked
 * Return: 1 if prime otherwis 0
 */
int is_prime_number(int n)
{
	if ((n % 2) == 0){
		if ((n % _sqrt_recursion(n)) == 0)
			return (1);
	}
	else
		return (0);
}
