#include <unistd.h>
#include "main.h"
/**
*_putchar - write the character c to stdout
*
*Return:  1 (Success) , -1 (erorr)
*/
int _putchar(char c)
{
  return (write(1,&c,1));
}
