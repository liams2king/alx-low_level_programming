#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets its head to NULL
 * @head: Pointer to the first node of the list
 *
 * This function frees all nodes of the linked list starting
 * from the given head
 * node and sets the head to NULL.
 */

void free_listint2(listint_t **head)

{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
