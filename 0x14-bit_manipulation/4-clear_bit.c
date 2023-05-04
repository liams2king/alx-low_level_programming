#include "main.h"


/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to modify
 * @index: index of the bit to clear
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > 63)
	return (-1);

	mask = ~mask;
	*n &= mask;

	return (1);
}
