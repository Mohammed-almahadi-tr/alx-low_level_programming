#include <stdio.h>
/**
*main-Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char alp = 'a';
char Alp = 'A';
for (alp = 'a'; alp <= 'z'; alp++)
{
putchar(alp);
}
for (Alp = 'A'; Alp <= 'Z'; Alp++)
{
putchar(Alp);
}
putchar('\n');
return (0);
}
