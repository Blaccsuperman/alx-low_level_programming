#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: name accepted by program
 * @f: pointer to function print_name
 *
 * Return: null
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
