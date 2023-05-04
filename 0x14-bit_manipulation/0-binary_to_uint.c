#include "main.h"

/**
 * binary_to_uint - Converts a binary number
 * represented as a string to an unsigned int.
 *
 * @b: The binary number as a string.
 *
 * Return: The converted number as an unsigned int,
 * or 0 if b is NULL or contains non-binary characters.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num <<= 1;
		if (*b++ == '1')
			num += 1;
	}

	return (num);
}
