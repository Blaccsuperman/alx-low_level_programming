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
	unsigned int count = 0;

	if (s[count] == '\0')
	{
		_putchar('\n')
		return (0);
	}
	_putchar(s[count]);
	_puts_recursion(s + 1);
}

