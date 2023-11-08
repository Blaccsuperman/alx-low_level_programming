#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: first number
 * @b: second number
 *
 * Return: (a-b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a nd b
 * @a: first number
 * @b: second number
 *
 * Return: (a*b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a nd b
 * @a: first number
 * @b: second number
 *
 * Return: (a / b), except b = 0 then print error and exit(100)
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides a nd b
 * @a: first number
 * @b: second number
 *
 * Return: remainder of (a / b)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
