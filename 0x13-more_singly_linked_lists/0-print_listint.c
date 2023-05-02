
Here's an implementation of the print_listint function in C that prints all the elements of a linked list:

c
Copy code
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }

    return (count);
}
