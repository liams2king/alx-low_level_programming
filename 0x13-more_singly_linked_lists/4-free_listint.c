#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: A pointer to the first node of the linked list to be freed
 *
 * This function iterates through the linked list starting from the first node
 * and frees each node. It sets the head to NULL once the entire list has been
 * freed.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
