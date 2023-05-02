#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in place.
 * @head: Pointer to the first node of the linked list.
 *
 * Return: A pointer to the first node of the reversed linked list.
 */

listint_t *reverse_listint(listint_t **head)
{

listint_t *prev = NULL, *current = *head, *next = NULL;

	for (; current; current = next)
	{
	next = current->next;
	current->next = prev;
	prev = current;
	}

	*head = prev;

	return (*head);
}
