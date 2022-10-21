#include "hash_tables.h"

/**
 * hash_table_delete -  delete hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp);
			tmp = NULL;
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
