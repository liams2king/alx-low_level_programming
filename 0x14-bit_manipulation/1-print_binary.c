#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 *
 * This function takes an unsigned long integer
 * and prints its binary equivalent
 * using putchar to print each bit of the number in reverse order. It does not
 * use arrays, malloc, or the % or / operators.
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int mask;

	for (i = 63; i >= 0; i--)
	{
		mask = n >> i;

		if (mask & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');
}
