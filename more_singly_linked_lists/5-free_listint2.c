#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - frees a listint_t list
 * sets head to NULL
 * @head: pointer to pointer of head of linked list
 * Return: Void
*/
void free_listint2(listint_t **head)
{
	listint_t *xyz;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		xyz = (*head)->next;
		free(*head);
		*head = xyz;
	}
	head = NULL;
}
