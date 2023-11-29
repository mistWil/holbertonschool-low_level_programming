#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer of th ehead of the list_t
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
