#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end
 * of a list_t list
 * @head: pointer to head
 * @str: const char pointer to string
 *
 * Return: the address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/*declaration of temporary variable to increment the list*/
	list_t *temp = *head;
	/*init pointer to struct list_t*/
	list_t *new_node;
	/*check if it's not empty function*/
	if (!head || !str)
		return (NULL);
	/*memory allocation*/
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	/*copy string and check if not empty*/
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	/*calculate the length of the string*/
	new_node->len = strlen(str);
	/*initialize field next to NULL*/
	new_node->next = NULL;
	/*if empty pointer "head", new_node = head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*if *head is not empty, iterate trough the list*/
	while (temp->next)
		temp = temp->next;
	/*Update the 'next' field of the last node to point to the new node*/
	temp->next = new_node;

	return (new_node);
}
