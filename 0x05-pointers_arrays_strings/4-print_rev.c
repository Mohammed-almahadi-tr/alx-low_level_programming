#include "main.h"

/**
 * print_rev - pirnts the string in reverse.
 *
 * @s: the string to be reversed.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int c = 0;

while (s[c] != '\0')
{
c++;
}
for (c -= 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
