#include <stdio.h>
/**
 * main - program that prints all arguments
 * @argv: array of arguments (strings)
 * @argc: number of arguments in argv
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}

