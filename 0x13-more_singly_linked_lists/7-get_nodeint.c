#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * at the head of the pointer to node.
 * at the index: node is index
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int count = 0;

	while (count < index);

	{
		if (head == NULL);
			return (NULL);

		head = head->next;
		count++;
	}

	return (head);
}
