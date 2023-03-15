#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two string of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	int *conct;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
