#include "main.h"
/**
*print_alphabet - prints the alphabet and
*
*/
void print_alphabet(void)
{
  int ch, it = 0;
  while (it < 10)
    {
      for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
      _putchar('\n');
      it++;
    }
}
