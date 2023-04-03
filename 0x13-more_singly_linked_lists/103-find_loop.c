#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a list
 * @head: pointer to listint_t structure
 * Return: address of the node where the loop start, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head, *two = head;

	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		{
			return (one);
		}
	}
	return (NULL);
}
