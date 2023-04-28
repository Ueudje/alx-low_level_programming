#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int p;

	for (p = 0; str[p]; p++)
		;
	return (p);
}

/**
 * add_node_end - function that adds a new node at the end of a list_t
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *apa;

	if (str == NULL)
		return (NULL);
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	add->len = _strlen(add->str);
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	apa = *head;
	while (apa->next)
		apa = apa->next;
	apa->next = add;
	return (apa);
}
