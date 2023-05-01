#include "lists.h"
#include <stdio.h>


/**
 * print_listint - prints all elements of a list of type listin_t.
 * @h: Pointer to the first item in the list.
 *
 * Return: The number of items in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t var = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		var++;
	}
	return (var);
}
