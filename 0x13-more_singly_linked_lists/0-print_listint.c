#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Rtrn: The nmbr of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
