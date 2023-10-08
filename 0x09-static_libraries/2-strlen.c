#include "main.h"
#include <stdio.h>

/**
 * _strlen - count string length.
 *
 * @s: the string to be counted.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
