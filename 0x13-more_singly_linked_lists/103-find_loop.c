#include "lists.h"

/**
 * find_listint_loop - Finds loop contained in
 * a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 * Return: NULL if no loop, else address of node where loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *placeholder, *place2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	placeholder = head->next;
	place2 = (head->next)->next;

	while (place2)
	{
		if (placeholder == place2)
		{
			placeholder = head;

			while (placeholder != place2)
			{
				placeholder = placeholder->next;
				place2 = place2->next;
			}

			return (placeholder);
		}

		placeholder = placeholder->next;
		place2 = (place2->next)->next;
	}

	return (NULL);
}
