#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @hd: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *hd)
{
	listint_t *slow = hd;
	listint_t *fast = hd;

	if (!hd)
	return (NULL);

	while (slow && fast && fast->next)
	{
	fast = fast->next->next;
	slow = slow->next;
	if (fast == slow)
	{
	slow = hd;
	while (slow != fast)
	{
	slow = slow->next;
	fast = fast->next;
	}
	return (fast);
	}
	}
	return (NULL);
}
