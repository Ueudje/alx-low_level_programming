#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * free_list - function that frees a list_t list
  * @head: pointer to the first node of the list to free
  *
  * Return: nothing
  */
void free_list(list_t *head)
{
	list_t *apa;

	while (head)
	{
		apa = head->next;
		free(head->str);
		free(head);
		head = apa;
	}
}
