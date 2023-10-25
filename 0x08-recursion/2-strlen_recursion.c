#include "main.h"

/**
 * int _strlen_recursion - prints length of string by recursion
 * Description: finds length of given string and returns value
 *
 * @s: accepted string
 * Return: length of given string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count = 1 + int _strlen_recursion(s + 1);
	}
	return (count);
}

