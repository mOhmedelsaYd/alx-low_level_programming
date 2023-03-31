#include "lists.h"
/**
 * list_len - length of linked list
 * @h: head
 * Return: return count of length
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	if (ptr == NULL)
		return (count);
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
