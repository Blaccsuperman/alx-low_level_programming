#include "main.h"


/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * Description : prints a reverse of a string
 * @s: The string to be printed.
 * Return : 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
