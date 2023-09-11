#include <stdio.h>
/**
*main-Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int dig = 0, dig2;

for (dig = 0; dig <= 99; dig++)
{
for (dig2 = 0; dig2 <= 99; dig2++)
{
if (dig != dig2 && dig < dig2)
{
putchar((dig / 10) + '0');
putchar((dig % 10) + '0');
putchar(' ');
putchar((dig2 / 10) + '0');
putchar((dig2 % 10) + '0');
if (dig + dig2 != 197)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
