#include "main.h"
/**
 * int find_sqrt - checks natural square root of a given number 
 * @num: number to find sqrt of
 * @root: root being tested 
 * Return: int value or -1 
*/
int find_sqrt(int num, int root)
{
	if ((root * root == num))
		{
			return (num);
		}
	else
	{
		return (-1);
	}
	return (sqrt_check(root + 1, num)
}
/**
 * _sqrt_recursion - returns natural sqrt of number
 * @n: int to find sqrt of
 * Return: sqrt of n or -1 if it doesnt exist
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (find_sqrt(1, n);
