#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n) of listint_t
 * @head: head of listint_t
 * Return: Sum of all data in list. If empty, return 0
*/
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
