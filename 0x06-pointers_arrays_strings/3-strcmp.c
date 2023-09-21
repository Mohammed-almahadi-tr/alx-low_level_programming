#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings.
 *
 * @s1: 1st str.
 * @s2: 2ed str.
 *
 * Return: a number.
 */
int _strcmp(char *s1, char *s2)
{
int equal = 0;

while (*s1)
{
if (*s1 != *s2)
{
equal = ((int)*sl - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (equal);
}
