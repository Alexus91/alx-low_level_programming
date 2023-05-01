#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: data in the element if it's empty 0 .
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int number;

	while (!head || !*head)
	{
		return (0);
	}
	number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (number);
}
