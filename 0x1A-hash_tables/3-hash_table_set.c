#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key string. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *         Can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *val_coppy;
	unsigned long int inx, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	val_coppy = strdup(value);
	if (val_coppy == NULL)
		return (0);

	inx = key_index((const unsigned char *)key, ht->size);
	for (j = inx; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = val_coppy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(val_coppy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = val_coppy;
	new_node->next = ht->array[inx];
	ht->array[inx] = new_node;

	return (1);
}
