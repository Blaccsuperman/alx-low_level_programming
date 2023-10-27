#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments
 * @argv: array of arguments (strings)
 * @argc: number of arguments in argv
 *
 * Return: 0 for two arguments, 1 for error
 */
int main(int argc, char *argv[])
{
	int mult, n1, n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mult = n1 * n2;
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
