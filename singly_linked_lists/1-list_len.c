#include "lists.h"

/**
 * list_len - return the number of elements in a
 * linked list.
 * @h: const list_t*
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
