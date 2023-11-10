#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds the accepted argumments and returns result
 * @n: number of args
 *
 * Return: sum if success and 0 if n==0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum;

	va_start(ap, n);

	if (n == 0)
		return (0);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);

	return (sum);
}
