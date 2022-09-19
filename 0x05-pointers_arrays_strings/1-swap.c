#include "main.h"

/**
 * swap_int - Swaps the values of 2 integers
 * @a:pointer to first value
 * @b:pointer to the second value
 * Return: void
 */

void swap_int(int *a, int *b)

{
	int p = *a;

	*a = *b;
	*b = p;
}
