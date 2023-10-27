#include <stdio.h>
/**
 * main - program that prints its name
 * @argv: array of arguments (strings)
 * @argc: number of arguments in argv
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
