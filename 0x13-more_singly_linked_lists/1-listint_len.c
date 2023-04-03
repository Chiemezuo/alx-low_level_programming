#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in the list
 * @pnt: A pointer to listint_t structure
 * Return: number of elements.
 */
size_t listint_len(const listint_t *pnt)
{
	size_t nodes = 0;

	while (pnt)
	{
		pnt = pnt->next;
		nodes++;
	}
	return (nodes);
}
