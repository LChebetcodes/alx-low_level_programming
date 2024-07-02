#include "main.h"

/**
 * void swap_int - A function that swaps the values of two integers
 * @a: - Swaps and stores the value of b
 * @b: - Swaps and stores the value of a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
