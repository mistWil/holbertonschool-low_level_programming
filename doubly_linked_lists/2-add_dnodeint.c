#include "lists.h"

/**
 * add_dnodeint - write a function that adds a new node
 * at the beginning of a dlistint_t list
 * @head: double pointer to the first node
 * @n: data value of the node
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_dlist;

	if (!head)
		return (NULL);

	/*Memory allocation*/
	new_dlist = malloc(sizeof(dlistint_t));
	if (!new_dlist)
		return (NULL);

	/*Copy node data (int)*/
	new_dlist->n = n;

	 /*Update the head pointer to the new_dlist*/
	new_dlist->next = *head;
	new_dlist->prev = NULL;

	if (*head)
		(*head)->prev = new_dlist;

	*head = new_dlist;

	return (new_dlist);
}


