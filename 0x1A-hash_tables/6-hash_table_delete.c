#include "hash_tables.h"
/**
 * hash_table_delete - deletes the hash table.
 * @ht: pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *node, *tp;
	unsigned long int inx;

	for (inx = 0; inx < ht->size; inx++)
	{
		if (ht->array[inx] != NULL)
		{
			node = ht->array[inx];
			while (node != NULL)
			{
				tp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tp;
			}
		}
	}
	free(hd->array);
	free(hd);
}
