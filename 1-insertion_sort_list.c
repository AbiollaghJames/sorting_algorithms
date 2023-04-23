#include "sort.h"
/*
 * insertion_sort_list - function that implements insertion sort
 * @list: doubly linked list to perform sorting on
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev, *nxt;

	/* if list is empty or has one node, its sorted */
	if (list == NULL || (*list)->next == NULL)
		return;

	/* Traverse list from next or second node */
	curr = (*list)->next;

	while (curr != NULL)
	{
		nxt = curr->next;
		prev = curr->prev;

		while (prev != NULL && prev->n > curr->n)
		{
			prev->next = curr->next;

			if (curr->next != NULL)
				curr->next->prev = prev;
			curr->next = prev;
			curr->prev = prev->prev;
			prev->prev = curr;

			if (curr->prev == NULL)
				*list = curr;
			else
				curr->prev->next = curr;
			print_list(*list);
			prev = curr->prev;
		}
		curr = nxt;
	}
}
