#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str - original string
 * Return: pointer to duplicated string/NULL if fail
*/
char *_strdup(char *str)
{
    char *s;
    int x = 0;
    int y = 1;

    if (str == NULL)
     return (NULL);
    
    while (str[y])
    {
        y++;
    }
    s = malloc((sizeof(char) * y) + 1);
    while (x < y)
    {
        s[x] = str[x];
        x++;
    }
    s[x] = '\0';
    return(s);
}
