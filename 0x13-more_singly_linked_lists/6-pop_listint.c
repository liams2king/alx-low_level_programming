#include "lists.h"

/**
 * pop_listint - Removes the first node from a linked list.
 * @head: Pointer to the first element in the linked list
 *
 * Return: The data stored in the removed element, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int varNum;


	if (!head || !*head)
		return (0);


	varNum = (*head)->n;


	temp = (*head)->next;
	free(*head);

	*head = temp;


	return (varNum);
}
