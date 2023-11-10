#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);


/**
 * struct choice - A new struct type for selecting and printing
 * @symbol: A symbol representing a data type.
 * @choice: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct choice
{
	char *symbol;
	void (*choice)(va_list arg);

} choice_t;

#endif
