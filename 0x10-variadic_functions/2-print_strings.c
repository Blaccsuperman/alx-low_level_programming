#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints a set of strings
 * @separator: separates strings
 * @n: count of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *w;

	va_start(strings, n);


	for (i = 0; i < n; i++)
	{
		w = va_arg(strings, char *);

		if (w == NULL)
			printf("(nil)");
		else
		{
			printf("%s", w);
		}
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");

	va_end(strings);
}

