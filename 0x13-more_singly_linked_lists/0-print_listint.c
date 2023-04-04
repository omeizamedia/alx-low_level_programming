#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @y: linked list of type listint_t to print
 * Written by Ibrahim Omeiza
 * Return: number of nodes
 */
size_t print_listint(const listint_t *y)
{
	size_t val = 0;

	while (y)
	{
		printf("%d\n", y->n);
		val++;
		y = y->next;
	}
	return (val);
}
