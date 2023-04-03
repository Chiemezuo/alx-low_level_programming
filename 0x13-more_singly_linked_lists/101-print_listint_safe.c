#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts number of unique nodes
 * in looped listint_t linked list.
 * @head: pointer to the head of the listint_t to check.
 * Return: 0 if list not looped, else number of unique nodes in list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *placeholder, *place2;
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
 * print_listint_safe - Prints listint_t list safely.
 * @head: pointer to the head of the listint_t list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
