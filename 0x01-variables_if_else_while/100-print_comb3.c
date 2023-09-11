#include <stdio.h>
/**
*main-Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int dig = 0, dig2;

for (dig = 0; dig <= 9; dig++)
{
for (dig2 = 0; dig2 <= 9; dig2++)
{
if (dig != dig2 && dig < dig2)
{
putchar(dig + '0');
putchar(dig2 + '0');
if (dig+dig2 != 17)
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
