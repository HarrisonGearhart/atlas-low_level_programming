#include "main.h"
/**
 * print_rev_recursion - prints string in reverse
 * @s: string to be reversed
 * Return: Void
*/
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
    {
        return;
    }
    s--;
    _print_rev_recursion(s);
    _putchar (*s);
}