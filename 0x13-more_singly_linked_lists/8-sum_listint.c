#include "lists.h"
/**
 * sum_listint - calculates the sum of all data in the list listint_t
 * @head: first node in the list
 *
 * Return: the sum if empty 0
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		s += tmp->n;
		tmp = tmp->next;
	}
	return (s);
}
