#include "lists.h"
/**
 * insert_nodeint_at_index - creat a new node in a linked list
 * @head: pointer to the head of the list
 * @idx: the new node index
 * @n: data of the new node
 * Return: pointer to the new node or 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
	{
		return (0);
	}
	new_node->n = n;
	new_node->next = NULL;

	while (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (j = 0; tmp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
