#include "main.h"

/**
 * _isupper - check if the char is upper or not.
 *
 * Return:  0 (lowercase), 1 (uppercase).
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
