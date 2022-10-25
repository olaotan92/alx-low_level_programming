#include "lists.h"

/**
 * pop_listint - deletes the head node of a listing_t list
 * @head: head of linked list
 * Return: the head node's data (n), if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
