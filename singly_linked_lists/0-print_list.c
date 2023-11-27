#include "lists.h"

/**
 * print_list - print all declarations in the linked list
 * @h: pointer on struct call list_t
 *
 * Return: int size_t
 */

size_t print_list(const list_t *h)
{
	size_t count = 0; /*variable pour compter le nombre d'elements*/

	while (h != NULL)/*verifie si str est NULL et imprime en consequence*/
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next; /*passe au prochain element de la liste*/
		count++;/*incremente le compteur*/
	}
	return (count);/*retourne le nombre d'elements dans la liste*/
}
