#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: swap and store address of b
 * @b: swap and store address of a
 *Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
