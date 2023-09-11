#include <stdio.h>
/**
*main-Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
  int dig = 0, dig2, dig3;

for (dig = 0; dig <= 9; dig++)
{
for (dig2 = 0; dig2 <= 9; dig2++)
{
for (dig3 = 0; dig3 <= 9; dig3++)
{
if (dig != dig2  && dig < dig2 && dig2 != dig3 && dig2 < dig3)
{
putchar(dig + '0');
putchar(dig2 + '0');
putchar(dig3 + '0');
if (dig+dig2+dig3 != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
