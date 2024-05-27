#include "main.h"

/**
 * swap_int - Swaps the values of 2 ints
 * @a: first int
 * @b: second int
 * Return: Void
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
