#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *hd);
size_t print_listint_safe(const listint_t *hd);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @hd: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *hd)
{
const listint_t *tort, *rabbit;
size_t nodes = 1;

	if (hd == NULL || hd->next == NULL)
	return (0);

	tort = hd->next;
	rabbit = (hd->next)->next;
	while (rabbit)
	{
	if (tort == rabbit)
	{
	tort = hd;
	while (tort != rabbit)
	{
		nodes++;
		tort = tort->next;
		rabbit = rabbit->next;
	}
	tort = tort->next;
	while (tort != rabbit)
	{
		nodes++;
		tort = tort->next;
	}
	return (nodes);
}
	tort = tort->next;
	rabbit = (rabbit->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @hd: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *hd)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(hd);

	if (nodes == 0)
	{
	for (; hd != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)hd, hd->n);
		hd = hd->next;
	}
	}

	else
	{
		for (index = 0; index < nodes; index++)
	{
		printf("[%p] %d\n", (void *)hd, hd->n);
		hd = hd->next;
	}
		printf("-> [%p] %d\n", (void *)hd, hd->n);
	}
	return (nodes);
}
