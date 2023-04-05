#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
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
