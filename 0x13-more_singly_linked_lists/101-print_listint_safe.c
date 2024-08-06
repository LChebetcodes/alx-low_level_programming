#include "lists.h"

#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: pointer to the head of the listint_t to check
 * Return: If the list is not looped - 0
 * Otherwise - the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *john, *jane;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	john = head->next;
	jane = (head->next)->next;

	while (jane)
	{
		if (john == jane)
		{
			john = head;
			while (john != jane)
			{
				nodes++;
				john = john->next;
				jane = jane->next;
			}

			john = john->next;
			while (john != jane)
			{
				nodes++;
				john = john->next;
			}
			return (nodes);
		}
		john = john->next;
		jane = (jane->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: pointer to the first element in the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p]) %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
