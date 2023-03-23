#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - The sum of a and b.
 * @a: is a number
 * @b: is a number
 *
 * Return: the sum.
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - The difference of a and b.
 * @a: is a number
 * @b: is a number
 *
 * Return: the diff..
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: the first number.
 * @b: the secod number.
 *
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The result of de the division of a by b.
 * @a: the integer number
 * @b: the integer number
 *
 * Return: result of the div
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
 * op_mod - The remainder of the division of a by b.
 * @a: the integer number
 * @b: the integer number
 *
 * Return: Remainder.
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
