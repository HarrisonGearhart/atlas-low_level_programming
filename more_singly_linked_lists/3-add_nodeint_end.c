#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_noint_end - adds a new node at the end of the singly linked list
 * @head: head of the list
 * @n: integer
 * Return: Address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	temp = *head;
	new = (listint_t *)malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
