#include "lists.h"

/**
 * find_listint_loop - Finds the starting node of a loop in a linked list
 * @head: Pointer to the first node of the list
 *
 * Return: Address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	do {
		if (!fast || !(fast->next))
			return (NULL);
		slow = slow->next;
		fast = fast->next->next;
	} while (slow != fast);

	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (fast);
}
