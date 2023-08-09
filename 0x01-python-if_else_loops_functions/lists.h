#ifndef lists_h
#define lists_h
#include <stddef.h>

/*
 * struct listint_s - structured singly linked list.
 * @n: an integer.
 * @next: pointer of the next node.
 *
 * Description: structured linked list.
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

listint_t *insert_node(listint_t **head, int number);

#endif
