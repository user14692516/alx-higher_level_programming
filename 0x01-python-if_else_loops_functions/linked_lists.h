#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * print_listint - printing elements in a listint.
 * @h: points to a list head.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int n;

    current = h;
    n = 0;
    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        n++;
    }

    return (n);
}

/*
 * add_nodeint_end - adding a new node at the end of a linked list.
 * @head: first node pointer
 * @n: integer that is supposed to be added to the new node.
 * Return: new element address
 * NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;

    current = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        while (current->next != NULL)
            current = current->next;
        current->next = new;
    }

    return (new);
}

/*
 * free_listint - freeing a list.
 * @head: first pointer that is supposed to be freed.
 * Return: Null
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}
