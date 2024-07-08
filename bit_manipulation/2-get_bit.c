/**
 * get_bit - returns the value of a bit in a given index
 * @n: value to compare
 * @index: position to compare
 * Return:  value of bit at given index. -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}