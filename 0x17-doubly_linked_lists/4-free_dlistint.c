#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: list pointer
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node;
	dlistint_t *nxt_node;

	if (head)
	{
		curr_node = head;
		nxt_node = head->next;
		while (nxt_node)
		{
			free(curr_node);
			curr_node = nxt_node;
			nxt_node = nxt_node->next;
		}
		free(curr_node);
	}
}
