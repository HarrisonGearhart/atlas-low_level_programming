#ifndef _SEARCH_ALGOS_
#define _SERACH_ALGOS_
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_recursive (int *array, int left, int right, int value);
void print_array(int *array, int left, int right);

#endif

