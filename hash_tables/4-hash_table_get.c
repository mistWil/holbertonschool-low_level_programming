#include "hash_tables.h"

/**
 * hash_table_get - function that retries a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: the value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	char *value = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			value = temp->value;
			break;
		}
		temp = temp->next;
	}
	return (value);
}
