#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
int check_cycle(listint_t *list)
{
    const listint_t *slow = list, *fast = list;
    while (fast && fast->next)
    {
        slow = slow->next;
	fast = fast->next->next;
	if (slow == fast)
		return (1);
    }

    return (0);
}
