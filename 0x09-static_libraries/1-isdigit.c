#include "main.h"

/**
 * _isdigit - check if the char is digit or not.
 *
 * @c: an intiger to preasnt the characters.
 *
 * Return:  0 (not digit), 1 (digit).
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
