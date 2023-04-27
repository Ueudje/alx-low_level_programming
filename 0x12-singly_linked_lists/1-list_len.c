#include <stdio.h>
#include "lists.h"

/**
  * list_len - function that returns the number of elements
  * @h: pointer to the lis_t list
  * Return: number of elements h
  */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
