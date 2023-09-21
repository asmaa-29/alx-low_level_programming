#include "lists.h"

/**
 *print_list - prints a linked list
 *@h:the head of the linked list
 *Return: the length of the string
 */
size_t print_list(const list_t *h)
{


	register int i = 0;

	while (h)
	{
		(!h->str)
			? printf("[0] (nil)\n")
			: printf("[%i] %s\n", h->i, h->str);
		h = h->next;
		i++;
	}
	return (i);

}
