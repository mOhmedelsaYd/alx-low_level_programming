/*
 * File: 0-print_listint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	if (ptr == NULL)
		return (count);
	while (ptr != NULL)
	{
		char *s = ptr->str;
		int len = ptr->len;
		(s != NULL) ? printf("[%d] %s\n", len, s) : printf("[0] (nil)\n");
		ptr = ptr->next;
		count++;
	}
	return (count);
}
