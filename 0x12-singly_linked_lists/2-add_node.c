#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* _strlen - function that returns the length of string
* @apa : string to find the length of
* Return: i
*/
int _strlen(const char *apa)
{
	int i = 0;


	while (apa[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  * add_node - function that adds a new node at the beginning of a list_t
  * @head: head of a list_t
  * @str: alue to insert into element
  *
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;

	return (add);
}

