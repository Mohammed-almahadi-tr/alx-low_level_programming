#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9.
 *
 * @n: number of times the line is printed.
 * @c: itrator.
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
