#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * insert_nodeint_at_index -  function that inserts a new node
  * at a given position
  * @head: head of a list
  * @idx: index where the new node is added
  * @n: integer element
  *
  * Return: pointer to the new node, or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *new;
    listint_t *temp;

    temp = *head;

    if (idx != 0)
    {
        for (i = 0; i < idx - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
    }

    if (temp == NULL && idx != 0)
        return (NULL);

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;

    if (idx == 0)
    {
        new->next = *head;
        *head = new;
    }
    else
    {
        new->next = temp->next;
        temp->next = new;
    }

    return (new);
}
