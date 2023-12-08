#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	/* dans le cas où la node existe pas */
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;

	if (ht->array[index] != NULL)
		newnode->next = ht->array[index];

	ht->array[index] = newnode;

	return (1);
}
