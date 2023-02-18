#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 *
 * Return 0 (Success)
 *
 */
int main(void)
{
	int n;
	long int nb;
	long long int lnb;
	char c;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(nb));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lnb));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
