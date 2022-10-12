#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts using the insertion sort algorithm
 * @list: the list of the doubly linked list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *p, *f, *l, *q;
	int flag, fg = 0;


	if (!list || !*list)
		return;
	p = *list, f = p, l = p, q = p;


	while (p)
	{
		f = p->next;
		flag = 0;
		fg++;
		if (f && p->n > f->n)
		{
			tmp = p->prev;
			if (p->prev)
				tmp->next = f;
			f->prev = tmp;
			p->prev = f;
			p->next = f->next;
			tmp = f->next;
			if (f->next)
				tmp->prev = p;
			f->next = p;
			if (fg == 1)
				*list = f;
			print_list(*list);
			l = f->prev;
			flag = 1;
			while (l && f->n < l->n)
			{
				tmp = l->prev;
				q = l->prev;
				if (l->prev)
					tmp->next = f;
				f->prev = tmp;
				l->prev = f;
				l->next = f->next;
				tmp = f->next;
				if (f->next)
					tmp->prev = l;
				f->next = l;
				if (f->prev == NULL)
					*list = f;
				print_list(*list);
				if (f->prev == NULL)
					break;
				l = q;
			}
		}
		if (flag == 0)
			p = p->next;
	}
}
