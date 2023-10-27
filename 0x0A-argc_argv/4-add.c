#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - program that sums all integer arguments
 * @argv: array of arguments (strings)
 * @argc: number of arguments in argv
 *
 * Return: 0 for two arguments, 1 for error
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int n;
	unsigned int sum;
	char *p;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			for (n = 0; n < strlen(p); n++)
			{
				if (p[n] < 48 || p[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
				sum += atoi(p);
				p++;
			}
		}
		printf("%d\n", sum);

	}
	else
	{
		printf("0\n");
	}
	return (0);
}
