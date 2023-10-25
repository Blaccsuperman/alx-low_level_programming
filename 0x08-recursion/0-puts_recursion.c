#include "main.h"
/**
 * _puts_recursion - print a given string
 *
 * @s: the string accepted
 * Description: The code below prints string
 * using putchar character by character
 * Return: (0)
 *
 */

void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

