#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string.
 *
 * @dest: 1st str.
 * @src: 2ed str.
 * @n: num of bytes.
 *
 * Return: a pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
