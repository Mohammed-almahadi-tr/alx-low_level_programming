#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14.
 *
 * Return: Always 0 (Success).
 */
void more_numbers(void)
{
int row, count, num;
for (row = 0; row <= 9; row++)
{
for (count = 0; count <= 14; count++)
{
num = count;
if (count > 9)
{
_putchar(1 + 48);
num = count % 10;
}
_putchar(num + 48);
}
_putchar('\n');
}
}
