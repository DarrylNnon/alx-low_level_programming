#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list or first node in the list
 * Author: Darryl Nnon
 * Return: only return the numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
