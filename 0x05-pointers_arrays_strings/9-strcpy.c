#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string.
 *
 * @dest: the buffer.
 * @src: the string.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 8; src[i] != '\0'; i++)
{
dest[i]= src[i];
}
dest[i++] = '\0';
return (dest);
}
