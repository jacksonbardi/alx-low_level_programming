#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a
 * given position in a dlistint_t list
 * @h: Pointer to a pointer to the head of the doubly linked list
 * @idx: Index where the new node should be inserted (starting from 0)
 * @n: Integer value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
