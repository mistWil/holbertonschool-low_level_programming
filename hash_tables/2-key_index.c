#include "hash_tables.h"

/**
 * key_index - generate index
 * @key: the *key
 * @size: int size
 *
 * Return: unsigned long int (index)
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
