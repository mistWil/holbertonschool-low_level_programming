#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the pointer to the head of the list.
 * @str: The string to be duplicated and added to the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	/*initialisation d'un pointeur new_node vers la structure list_t*/
	list_t *new_node;

	/*verification du contenu de head et str dans list_t*/
	if (head == NULL || str == NULL)
		return (NULL);

	/*allocation de la memoire pour notre node et vérification*/

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*enregistrment de la string de new_node grace à strdup*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculate the length of the string */
	new_node->len = strlen(str);

	/* Update the head pointer to point to the new node */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
