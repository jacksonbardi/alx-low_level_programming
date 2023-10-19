#include "lists.h"

/**
 * list_len - Rtrns the nmbr of elements in a lnkd list_t list.
 * @h: Pointer to the head of the lnked lst.
 *
 * Retrn: The nmbr of elmnts in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
