#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @top: pointer to the first node in the list
 * @n: data to insert in that new node
 * Written by Ibrahim Omeiza
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **top, const int n)
{
	listint_t *latest;

	latest = malloc(sizeof(listint_t));
	if (!latest)
	return (NULL);

	latest->n = n;
	latest->next = *top;
	*top = latest;
	return (latest);
}
