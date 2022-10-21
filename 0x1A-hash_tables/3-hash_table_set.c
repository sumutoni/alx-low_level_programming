#include "hash_tables.h"

/**
 * check_updates - checks if there is an existing matching key
 * @ht: hash table
 * @idx: index of key/value pair
 * @key: key
 * @value: corresponding value
 *
 * Return: 1 if there is a match, 0 otherwise
 */
int check_updates(hash_table_t *ht, unsigned long int idx, const char *key,
		const char *value)
{
	hash_node_t *node;

	node = (ht->array)[idx];
	while (node && !strcmp(node->key, (char *)key))
	{
		node = node->next;
	}
	if (node == NULL)
		return (0);
	node->value = strdup(value);
	if (!node->value)
		return (0);
	return (1);
}
/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table to add to
 * @key: key 
 * @value: value associated with key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;

	if (!key || !ht)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = (char *)key;
	node->value = NULL;
	if (value)
	{
		node->value = strdup(value);
		if (!node->value)
		{
			free(node);
			return (0);
		}
	}
	idx = key_index((const unsigned char *)key, ht->size);
	if (!check_updates(ht, idx, key, value))
	{
		if ((ht->array)[idx])
		{
			node->next = (ht->array)[idx];
			(ht->array)[idx] = node;
			return (1);
		}
		node->next = NULL;
		(ht->array)[idx] = node;
	}
	return (1);
}
