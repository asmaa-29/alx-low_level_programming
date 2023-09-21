#include "lists.h"
/**
 * _strlen - returns the length of a string
 * @s: string whose length to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 *print_list - prints a linked list
 *@h: pointer to first node
 *Return: the size of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

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
