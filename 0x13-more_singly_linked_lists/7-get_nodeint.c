#include "lists.h"
/**
 * get_nodeint_at_index - returns the node of any index in a linked list
 * @head: first node in the linked list
 * @index: index of the node
 * Return: pointer to the node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	listint_t *tmp = head;

	for (j = 0; tmp != NULL && j < index;)
	{
		j++;
		tmp = tmp->next;
	}
	if (j == index && tmp != NULL)
	{
		return (tmp);
	}
	return (NULL);
}
