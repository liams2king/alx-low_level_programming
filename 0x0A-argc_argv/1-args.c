#include "main.h"
#include <stdio.h>

/**
 * main - Prints the numbers of args
 * @argc: argiument count
 * @argv: argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	 printf("%d\n", argc - 1);
	return (0);
}
