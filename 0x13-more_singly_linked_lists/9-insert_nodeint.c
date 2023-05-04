#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the nw node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *x;
	listint_t *temp = *h;

	new = malloc(sizeof(listint_t));
	if (!x || !h)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (idx == 0)
	{
		x->next = *h;
		*h = x;
		return (x);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			x->next = temp->next;
			temp->next = x;
			return (x);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
