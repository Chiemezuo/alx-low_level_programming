#include "lists.h"

/**
 * get_nodeint_at_index - gets a node of list at specific index
 * @head: pointer to listint_t structure
 * @i: index of the node
 * Return: pointer to node at specified index, or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int i)
{
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (num == i)
			return (head);
		head = head->next;
		num++;
	}
	return (NULL);
}
