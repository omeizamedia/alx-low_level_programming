#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @hd: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **hd, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *latest;
	listint_t *temp = *hd;

	latest = malloc(sizeof(listint_t));
	if (!latest || !hd)
	return (NULL);

	latest->n = n;
	latest->next = NULL;

	if (idx == 0)
	{
		latest->next = *hd;
		*hd = latest;
		return (latest);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
	{
		latest->next = temp->next;
		temp->next = latest;
		return (latest);
	}
		else
		temp = temp->next;
	}
	return (NULL);
}
