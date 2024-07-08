#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another.
 * @n: number
 * @m: number to flip into
 * Return: Necessary # of bits to flip to get from n to m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int flip = n ^ m;

	while (flip > 0)
	{
		flip = flip & (flip - 1);
		counter++;
	}
	return (counter);
}
