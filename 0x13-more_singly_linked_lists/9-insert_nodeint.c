#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node to a listint_t
 * list at a given position.
 * @head: pointer to the address of the
 *  head of the listint_t list.
 * @idx: index of the listint_t list where new
 * node should be added.
 * @n: integer for the new node to contain.
 * Return: NULL if function fails, else address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
