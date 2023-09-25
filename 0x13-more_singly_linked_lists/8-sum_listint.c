#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: determine the head of a list.
 * Author: Darryl Nnon
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int result;

	result = 0;
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
