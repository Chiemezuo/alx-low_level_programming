#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements in the list
 * @pnt: A pointer to listint structure
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *pnt)
{
	size_t nodes = 0;

	while (pnt)
	{
		printf("%d\n", pnt->n);
		pnt = pnt->next;
		nodes++;
	}
	return (nodes);
}
