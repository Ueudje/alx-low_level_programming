#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * pop_listint - function that deletes the head node of a listint_t
  * @head: head of a list
  *
  * Return: 0, if the linked list is empty
  */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;
	hnode = curr->n;

	h = curr->next;

	free(curr);
	*head = h;

	return (hnode);
}
