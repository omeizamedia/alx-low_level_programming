#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @hd: pointer to the first element in the list
 * @idx: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **hd, unsigned int idx)
{
	listint_t *temp = *hd;
	listint_t *latest = NULL;
	unsigned int i = 0;

	if (*hd == NULL)
	return (-1);

	if (idx == 0)
	{
		*hd = (*hd)->next;
		free(temp);
		return (1);
	}
	while (i < idx - 1)
	{
		if (!temp || !(temp->next))
		return (-1);
		temp = temp->next;
		i++;
	}
	latest = temp->next;
	temp->next = latest->next;
	free(latest);

	return (1);
}
