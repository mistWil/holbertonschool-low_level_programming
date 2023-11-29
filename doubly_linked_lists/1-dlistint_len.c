#include "lists.h"

/**
 * dlistint_len - Returns the number of elements
 * in a dlistint_t list.
 * @h: A pointer to the head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		current = current->next;
		node_count++;
	}

	return (node_count);
}
