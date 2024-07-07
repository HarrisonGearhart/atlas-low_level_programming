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

#endif
