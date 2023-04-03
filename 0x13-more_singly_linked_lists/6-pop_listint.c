#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * and returns the head node's data n.
 * @head: pointer to listint_t structure.
 * Return: head node's datafrom deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int endpoint;

	if (*head == NULL)
		return (0);

	endpoint = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (endpoint);
}
