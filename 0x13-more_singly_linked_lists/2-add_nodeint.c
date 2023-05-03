#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * add_nodeint - function that adds a new node at the beginning
  * @head: head of a list
  * @n: data to insert in that new nod
  *
  * Return: pointer to the new node, or NULL if it fails
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head  = add;

	return (*head);
}
