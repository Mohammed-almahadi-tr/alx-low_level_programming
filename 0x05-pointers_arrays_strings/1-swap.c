#include "main.h"

/**
 * swap_int - swap two ints.
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
