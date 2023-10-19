#include "lists.h"

/**
	*print_list - print all elements in a simgly linked list
	*@h: head of the list
	*Return: number of nodes
	*/

size_t print_list(const list_t *h)
{
	int N_len;

	if (h == NULL)
		return (-1);

	for (N_len = 0; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}

	return (i);
}

