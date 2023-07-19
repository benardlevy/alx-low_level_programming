#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum of a and b
 * @a: integer a
 * @b: integer b
 * Return: Nothing
 */

int op_add(int a, int b)
{

	return (a + b);

}

/**
 * op_sub - sub of a and b
 * @a: integer a
 * @b: integer b
 * Return: Nothing
 */

int op_sub(int a, int b)
{

	return (a - b);

}

/**
 * op_mul - mul of a and b 
 * @a: integer a
 * @b: integer b
 * Return: Nothing
 */

int op_mul(int a, int b)
{

	return (a * b);

}

/**
 * op_div - div of a and b
 * @a: integer a
 * @b: integer b
 * Return: Nothing
 */

int op_div(int a, int b)
{

	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);

}

/**
 * op_mod -
 * @a:
 * @b:
 * Return:
 */

int op_mod(int a, int b)
{

	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);

}
