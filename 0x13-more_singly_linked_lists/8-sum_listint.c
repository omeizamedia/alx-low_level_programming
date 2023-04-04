#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @top: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *top)
{
	int sum = 0;
	listint_t *temp = top;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
