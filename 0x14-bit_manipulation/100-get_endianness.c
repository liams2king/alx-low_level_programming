#include "main.h"

/**
 * get_endianness - determines the endianness of the machine
 *
 * This function checks the endianness of the machine by checking the value of
 * the least significant byte of a 4-byte integer. If it is 1, the machine is
 * little endian, otherwise it is big endian.
 *
 * Return: 1 for little endian, 0 for big endian
 */


int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);
}
