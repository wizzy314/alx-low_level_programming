#include "lists.h"

/**
	*print_list - print all elements in a simgly linked list
	*@h: head of the list
	*Return: number of nodes
	*/

{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
