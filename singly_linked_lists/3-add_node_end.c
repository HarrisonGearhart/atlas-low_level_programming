#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add a node to end of list_t
 * @head: head of list_t
 * @str: string to be added
 * Return: Pointer to new node in list_t
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	temp = *head;
	new = (list_t *)malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
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

/**
 * _strlen - returns the length of a string
 * @s: the string being counted
 * Return: the length of the string
*/
int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
