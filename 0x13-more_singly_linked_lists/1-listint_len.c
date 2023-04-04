#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @x: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *x)
{
	size_t val = 0;

	while (x)
	{
	val++;
	x = x->next;
	}
	return (val);
}
