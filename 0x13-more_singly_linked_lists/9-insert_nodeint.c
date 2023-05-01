#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node with data 'n' at a
 * given position in a linked list.
 * @head: pointer to the first element in the linked list
 * @idx: index where the new node should be added (starting from 0)
 * @n: data to be added to the new node
 *
 * Return: On success, pointer to the new node. On failure, NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (count = 0; temp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
