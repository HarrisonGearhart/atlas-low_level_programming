#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
 * struct lists_s - singly linked lists
 * @str: string
 * @len: length of str
 * @next: pointer to next node
*/
typedef struct lists_s
{
	char *str;
	unsigned int len;
	struct lists_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

void free_list(list_t *head);
int _strlen(const char *s);

#endif
