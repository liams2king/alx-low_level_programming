#include "main.h"


/**
 * flip_bits - counts the number of bits that need to be flipped
 * to convert one number into another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		if (diff & 1)
			count++;
		diff >>= 1;
	}

	return (count);
}
