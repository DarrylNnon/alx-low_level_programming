#include "lists.h"
/**
 * list_len - determine all the number of the elements in a list.
 * @h: singly linked list.
 * Return: all number of elements in the list.
 * Author: Darryl Nnon
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}

	return (nelem);
}
