#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{

	int i;
	int k = 0;
	int len = 0;

	if (needle == NULL)
		return (haystack);


	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if ((*(needle + k) == *(haystack + i)) && (*(needle + k) != '\0'))
		{
			k++;
			len++;
		}
		else
		{
			len = 0;
			k = 0;
		}
	}
	if (len == _strlen(needle))
	{
		return (haystack + i  - len);
	}

	return (NULL);
}
