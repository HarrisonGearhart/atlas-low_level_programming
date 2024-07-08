/**
 * set_bit - sets a bit value to 1 at given index position
 * @n: pointer to a value
 * @index: position to change bit
 * Return: 1 if sucessfull, -1 if fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
