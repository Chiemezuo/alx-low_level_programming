#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of list
 * @head: pointer to list structure
 * @n: integer for the new node
 * Return: The address of the new element, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int num)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->num = num;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
