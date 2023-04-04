#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @top: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **top)
{
	listint_t *temp;

	if (top == NULL)
	return;

	while (*top)
	{
		temp = (*top)->next;
		free(*top);
		*top = temp;
	}
	*top = NULL;
}
