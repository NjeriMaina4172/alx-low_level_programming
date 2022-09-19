#include "main.h"

/**
 * reset_to_98 - reset to 98
 * @n: input value
 *
 * Description: function that takes a pointer to an int as
 * parameter and updates value it points to 98
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int *num;

	int x = 98;

	num = &x;
	*n = *num;
}
