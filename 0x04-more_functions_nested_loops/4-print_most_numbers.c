#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 except 2 ,4.
 *
 * Return: Always 0 (Success).
 */
void print_most_numbers(void)
{
int c ;
for (c = 0; c >= 0 && c<= 9; c++)
{
if (c == 2 || c == 4)
{
continue;
}
_putchar(c + 48);
}
_putchar('\n');
}
