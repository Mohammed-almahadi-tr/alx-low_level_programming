#include <stdio.h>
/**
*main-Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int dig = 0, counter;

for (counter = 0; counter <= 15; counter++)
{
if (dig + '0' == 57)
{
dig += 39;
}
putchar(dig + '0');
}
putchar('\n');
return (0);
}
