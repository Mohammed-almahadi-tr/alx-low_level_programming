#include "main.h"

/**
 * print_line - print lines.
 *
 * @n: number of times the line is printed.
 *
 * Return: Always 0 (Success).
 */
void print_line(int n)
{
int c = 0;
while (c < n)
{
_putchar('_');
c++;
}
_putchar('\n');
}
