#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_int - print int type element from va_list
 * @arg: va_arg passed to function
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - print float type element from va_list
 * @arg: va_arg passed to function
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_char - print char type element from va_list
 * @arg: va_arg passed to function
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_str - print string element from va_list
 * @arg: args passed to function
 */
void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		printf("(nil)");
}

/**
 * print_all - function that prints all data types
 * @format: list of formats for printing
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	choice_t functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functions[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			functions[j].choice(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
