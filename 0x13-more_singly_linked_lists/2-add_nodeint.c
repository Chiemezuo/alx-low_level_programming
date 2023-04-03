#include "lists.h"
#include <string.h>

/**
 * add_nodeint - adds a new nod at the begining of a list
 * @head: pointer to list_t structure
 * @num: integer data to put into the new node
 * Return: the address of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int num)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->num = num;
	(*head)->next = new_node;
	return (*head);
}
