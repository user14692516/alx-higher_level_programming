#ifndef lists_h
#define lists_h

#include <stdio.h>
#include <stdlib.h>

/*
 * struct listint_s - a  structured singly linked list.
 * @n: an integer
 * @next: pointer that points to the next node.
 *
 * Description: a holberton singly linked list node structure
 */
typedef struct listint_s
{
		int n;
			struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int is_palindrome(listint_t **head);

#endif
