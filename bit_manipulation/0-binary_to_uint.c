#include "main.h"
/**
 * binary_to_uint - converts binary number into unsigned int
 * @b: a pointer to a string of 1s and 0s (binary number)
 * Return: the converted #. 0 if b contains something other than 1 or 0, or is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int mult = 1;
	int i;

	if (*b == '\0')
		return (0);
	for (i = 0; b[i];)
		i++;
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0' * mult);
		mult *= 2;
	}
	return (sum);
}
