#include "lists.h"

/**
 * free_listint_safe - frees a linked list of integers
 * @h: double pointer to the head of the linked list
 * Return: the number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *next;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current != NULL)
{
next = current->next;
free(current);
count++;
if (next >= current)
break;
current = next;
}

*h = NULL;
return (count);
}

