#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet ten times
*
*/
void print_alphabet_x10(void)
{
int ch, it = 0;

while (it < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
it++;
}
}
