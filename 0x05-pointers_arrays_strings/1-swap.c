#include "main.h"

/**
 * reset_to_98 - chage the value that the int hold.
 *
 * @a: pointer to int 1.
 * @b: pointer to int 2.
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
