#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	long int nb;
	long long int lnb;
	char c;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(nb));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lnb));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
