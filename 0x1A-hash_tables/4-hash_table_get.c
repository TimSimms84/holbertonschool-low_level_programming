#include "hash_tables.h"

/**
 * hash_table_get - retrives the value of a key
 * @key: where to get value
 * @ht: pntr to hash table
 * Return: value of key or NULL if faliure *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *search;

	search = ht->array[key_index((const unsigned char *)key, ht->size)];

	if (ht == NULL || ht->size == 0 || strlen(key) == 0)
		return (NULL);

	while (search)
	{
		if (strcmp(key, search->key) == 0)
			return (search->value);
		search = search->next;
	}
	return (NULL);
}
