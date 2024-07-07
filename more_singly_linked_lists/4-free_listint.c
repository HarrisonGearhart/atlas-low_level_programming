#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - free a linked list
 * @head: head of the linked list
 * Return: void
*/
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
