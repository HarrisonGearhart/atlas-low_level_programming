#include "main.h"
/**
 * _pow_recursion - returns x^y
 * @x: given number
 * @y: exponent value
 * Return: int value, -1 if y is negative
*/
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1);
    }
    if (y == 0)
    {
        return (1);
    }
    else
    {
        return (x * _pow_recursion(x, y - 1));
    }
}