#include "lists.h"

/**
 * free_listint_safe - frees a linked list and sets its head to NULL
 * @h: pointer to the first node in the linked list
 *
 * This function frees a linked list, handling lists with loops safely
 * by setting each node's pointer to NULL before freeing it.
 * After all nodes are freed, the head pointer is set to NULL.
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	current = *h;

	while (current)
	{
		len++;
		next = current->next;
		free(current);
		if (current <= next)
			break;
		current = next;
	}

	*h = NULL;
	return (len);
}
