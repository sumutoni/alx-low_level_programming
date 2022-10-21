#include "hash_tables.h"

/**
 * hash_table_get - returns value associated with key
 * @ht: hash table to look into
 * @key: key
 *
 * Return: associated value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[idx];
	while (node && strcmp(node->key, (char *)key))
	{
		node = node->next;
	}
	if (!node)
		return (NULL);
	return (node->value);
}
