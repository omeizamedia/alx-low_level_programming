#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @hd: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **hd)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!hd || !*hd)
	return (0);

	while (*hd)
	{
	diff = *hd - (*hd)->next;
	if (diff > 0)
	{
	temp = (*hd)->next;
	free(*hd);
	*hd = temp;
	len++;
	}
	else
	{
		free(*hd);
		*hd = NULL;
		len++;
		break;
	}
	}

	*hd = NULL;
	return (len);
}
