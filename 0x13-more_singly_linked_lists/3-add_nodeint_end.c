#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - function that adds a new node at the end
  * @head: pointer to the first node in the list
  * @n: data to insert in the new element
  *
  * Return: address of the new element, NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *temp;

	(void)temp;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = add;
	}
	else
	{
		while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = add;
	}

	return (*head);
}
