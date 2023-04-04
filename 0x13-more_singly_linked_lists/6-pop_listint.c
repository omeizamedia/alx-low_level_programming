#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @top: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **top)
{
	listint_t *temp;
	int val;

	if (!top || !*top)
	return (0);

	val = (*top)->n;
	temp = (*top)->next;
	free(*top);
	*top = temp;

	return (val);
}
