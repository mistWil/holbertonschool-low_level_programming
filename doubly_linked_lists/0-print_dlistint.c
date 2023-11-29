#include "lists.h"

/**
 * print_dlistint - function that prints all the
 * elements of a dlistin_t list.
 * @h: pointeur to the head of dlistin_t
 *
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cpt = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		if (current->n)
			printf("%d\n",current->n);

		cpt++;
		current = current->next;
	}
	return (cpt);
}
