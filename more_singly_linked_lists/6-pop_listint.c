#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - delets head of linked list
 * @head: head of linked list
 * Return: data (n) of head that was deleted
*/
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
