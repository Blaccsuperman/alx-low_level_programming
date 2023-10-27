#include <stdio.h>
/**
 * main - program that prints number of arguments
 * @argv: array of arguments (strings)
 * @argc: number of arguments in argv
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}

