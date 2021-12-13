#include "hash_tables.h"

/**
 * hash_table_get - retrives the value of a key
 * @key: where to get value
 * @ht: pntr to hash table
 * Return: value of key or NULL if faliure *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *search;

	if (ht->array == NULL || ht->size == 0 || strlen(key) == 0)
		return (NULL);
	if (index >= ht->size || ht == NULL)
		return (NULL);

	if (key && ht)
	{
		search = ht->array[index];
		if (search == NULL)
			return (NULL);
		while (strcmp(search->key, key) != 0)
			search = search->next;
		return (search->value);
		}
	return (NULL);
}
