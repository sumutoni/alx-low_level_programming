#include "hash_tables.h"

/**
 * key_index - finds index where key/value pair is to be
 * stored in hash table
 * @key: key value to hash and store
 * @size: size of hash table
 *
 * Return: index of key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx, hash;

	hash = hash_djb2(key);
	idx = hash;
	if (hash >= size)
		idx = hash % size;
	return (idx);
}
