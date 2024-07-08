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
	listint_t *xyz;
	
	while (head)
	{
		xyz = head->next;
		free(head);
		head = xyz;
	}
}
