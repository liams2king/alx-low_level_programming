#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the elements
 * in a linked list of integers
 * @head: Pointer to the first element of the list
 *
 * Return: The sum of all the elements in the list.
 *  Returns 0 if the list is empty.
 */
int sum_listint(listint_t *head)

{
	int varSum = 0;
	listint_t *temp = head;


	while (temp)
	{
		varSum += temp->n;
		temp = temp->next;
	}


	return (varSum);
}
