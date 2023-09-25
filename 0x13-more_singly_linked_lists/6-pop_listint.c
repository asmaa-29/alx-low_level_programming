#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: double pointer to head of list;
 * Return: value at head
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!(*head) || !head)
		return (0);
	node = *head;
	n = node->n;
	*head = (*head)->next;
	free(node);
	return (n);
}
