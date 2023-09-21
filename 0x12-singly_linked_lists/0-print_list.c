#include "lists.h"
/**
* print list - print all the element of  list_t list.
* @h: Singly linked list
* Return: number of elements in the list
* Author: Darryl Nnon
*/

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
