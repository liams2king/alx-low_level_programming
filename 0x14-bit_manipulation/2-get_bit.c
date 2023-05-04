#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the value of the bit at the given index, or -1 if an error occurs
 *
 * Description: The function uses a bitwise
 * AND operation with a bit mask to check
 * the value of the bit at the given index. If the bit is 1, it returns 1.
 * Otherwise,
 * it returns 0. If the index is invalid
 * (i.e. greater than or equal to the number
 * of bits in the number), it returns -1 to indicate an error.
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
