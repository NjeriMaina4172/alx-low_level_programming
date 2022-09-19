#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps integers
 * @a: first input
 * @b: secdond input
 *
 * Declaration: a function that swaps the values of two integers
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
