#include <stdio.h>
#include "lists.h"

/**
 * Print_list - prints all the elements of a linked list
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (i)
	{
		if (!i->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", i->len, i->str);
		i = i->next;
		x++;
	}

	return (x);
}
