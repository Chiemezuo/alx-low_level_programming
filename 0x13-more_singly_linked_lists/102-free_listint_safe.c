#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts number of unique nodes
 * in a looped listint_t linked list.
 * @head: pointer to the head of the listint_t to check.
 * Return: 0 if list is looped, else number of unique list nodes.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *placeholder, *place2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	placeholder = head->next;
	place2 = (head->next)->next;

	while (place2)
	{
		if (placeholder == place2)
		{
			placeholder = head;
			while (placeholder != place2)
			{
				nodes++;
				placeholder = placeholder->next;
				place2 = place2->next;
			}

			placeholder = placeholder->next;
			while (placeholder != place2)
			{
				nodes++;
				placeholder = placeholder->next;
			}

			return (nodes);
		}

		placeholder = placeholder->next;
		place2 = (place2->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees listint_t list safely
 * @h: pointer to the address of
 * the head of the listint_t list.
 * Return: TFreed list size.
 * Description: function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
