#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9.
 *
 * Return: Always 0 (Success).
 */
void print_numbers(void)
{
int c = 48;
while (c >= 48 && c <= 57)
{
_putchar(c);
c++;
}
_putchar('\n');
}
