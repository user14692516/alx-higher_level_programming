#ifndef lists_h
#define lists_h
#include <stdlib.h>

/*
 * struct listint_s - structured singly linked list.
 * @n: an integer.
 * @next: pointer that points to the next node.
 *
 * Description: node structure for a singly linked list.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
