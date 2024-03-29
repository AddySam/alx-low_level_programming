#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked list
 * @head: pointer to the first element in the link
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
