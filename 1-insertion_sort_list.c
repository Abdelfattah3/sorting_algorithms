#include "sort.h"
/**
* swap - swaps 2 nodes
* @a: node 1
* @b: node 2
*/
void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
	{
		a->prev->next = b;
	}
	if (b->next)
	{
		b->next->prev = a;
	}
	b->prev = a->prev;
	a->next = b->next;
	b->next = a;
	a->prev = b;
}

/**
* insertion_sort_list - sorts a list based on insertion way
* @list: head of DL list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (!list || !*list || !(*list)->next)
	{
		return;
	}
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (!j->prev)
				{
					*list = j;
				}
				print_list((const listint_t *)*list);
			}
			else
			{
				j = j->prev;
			}
		}
	}
}
