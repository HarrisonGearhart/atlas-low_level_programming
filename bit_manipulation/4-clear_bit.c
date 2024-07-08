#include "main.h"
/**
 * clear bit - sets a bit to 0 at a given index position
 * @n: pointer to value
 * @index: position to change bit
 * Return: 1 if successful, -1 if fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}