#include "lists.h"
/**
* list_len - function
* @h: string to print
*
* Description: Fnction to count nodes of the list_t list.
* Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
