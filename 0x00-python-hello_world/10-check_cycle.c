#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: pointer to the singly linked list.
 * Return: if there is no cycle, return 0.
 * if there is cycle, return 1.
 */
int check_cycle(listint_t *list)
{
	listint *turtle, hare;

	turtle = list->next;
	hare = list->next->next;

	if (list == NULL || list->next == NULL)
	{
		return (0);
	}

	while (turtle && hare && list)
	{
		if (turtle == hare)
			return (1);

		turtle = list->next;
		hare = list->next->next;
	}

	return (0);
}
