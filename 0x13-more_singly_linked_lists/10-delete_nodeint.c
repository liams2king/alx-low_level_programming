#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index in a linked list.
 * @head: Pointer to the first element of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if it fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *node_to_delete = NULL;
	unsigned int position = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (position < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		position++;
	}

	node_to_delete = temp->next;
	temp->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}
