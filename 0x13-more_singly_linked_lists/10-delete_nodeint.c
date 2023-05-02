#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in the lite with a certain index
 * @head: pointer to the first node in the list
 * @index: the index deleted node
 *
 * Return: 1 if success or -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *cur = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	while (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (x < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		x++;
	}
	cur = tmp->next;
	tmp->next = cur->next;
	free(cur);
	return (1);
}


