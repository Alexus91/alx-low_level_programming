#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of a linked list
 * @h: pointer to list_t list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t index = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		index++;
	}
	return (index);
}
