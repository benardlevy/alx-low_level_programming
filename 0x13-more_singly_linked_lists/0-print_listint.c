#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Linked list of type listint_to print
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{

	size_t num = 0;

	while (h)
	{
	printf("%d\n", h->n);
	num++;
	h = h->next;
	}
	return (num);

}
