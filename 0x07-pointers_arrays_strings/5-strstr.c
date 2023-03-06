#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{

		char *one = haystack;
		char *two = neddle;

	while (*one == *two && *two != '\0')
	{
		one++;
		two++;
	}
	if (*two == '\0')
	return (haystack);
	}
	return (NULL);
}
