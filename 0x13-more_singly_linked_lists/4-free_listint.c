#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: determine the head of a list.
 * Author: Darryl Nnon
 * Return:return nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
