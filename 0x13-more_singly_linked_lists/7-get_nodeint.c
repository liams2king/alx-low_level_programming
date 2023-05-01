#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node
 * at a specified index in a linked list
 *
 * @head: The first node in the linked list
 * @index: The index of the node to return
 *
 * Return: Pointer to the node we're looking for,
 * or NULL if the index is out of range
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{


	unsigned int c = 0;
	listint_t *temp = head;


	while (temp && c < index)
	{
		temp = temp->next;
		c++;

	}


	return (temp ? temp : NULL);
}
