#include "hash_tables.h"
/**
 * hash_table_print - Printing a hash table.
 * @ht: A pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nod;
	unsigned long int inx;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (inx = 0; inx < ht->size; inx++)
	{
		if (ht->array[inx] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			nod = ht->array[inx];
			while (nod != NULL)
			{
				printf("'%s': '%s'", nod->key, nod->value);
				nod = nod->next;
				if (nod != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
