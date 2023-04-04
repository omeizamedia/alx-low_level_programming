#include "lists.h"

/**
 * free_listint - frees a linked list
 * @top: listint_t list to be freed
 */
void free_listint(listint_t *top)
{
	listint_t *temp;

	while (top)
	{
		temp = top->next;
		free(top);
		top = temp;
	}
}
