#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @hd: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **hd)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*hd)
	{
		next = (*hd)->next;
		(*hd)->next = previous;
		previous = *hd;
		*hd = next;
	}
		*hd = previous;
	return (*hd);
}
