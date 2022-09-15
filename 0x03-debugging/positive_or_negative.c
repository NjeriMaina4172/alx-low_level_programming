#include "main.h"

/**
 * positive_or_negative - Prints 'i is zero' if i is 0,
 * 'i is positive' if i > 0 or 'i is negative' if i < 0
 * @i: The number to check
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if  (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
