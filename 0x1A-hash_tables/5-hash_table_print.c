#include "hash_tables.h"

/**
 * hash_table_print - prints content of hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, j = 0;
	hash_node_t *node;

	if (!ht)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array)[i])
		{
			node = (ht->array)[i];
			while (node)
			{
				if (j == 0)
					printf("'%s': '%s'", node->key,
							node->value);
				else
					printf(", '%s': '%s'", node->key,
							node->value);
				node = node->next;
				j++;
			}
		}
	}
	printf("}\n");
}
