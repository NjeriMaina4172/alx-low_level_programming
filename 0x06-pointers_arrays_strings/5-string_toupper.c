#include "main.h"

#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @a: input string
 * Return: the pointer to dest
 */



char *string_toupper(char *a)
{
	int size = strlen(a);
	int i;

	for (i = 0; i < size; i++)
	{
		if ((*(a + i) >= 97) && (*(a + i) <= 122))
		{
			*(a + i) = *(a + i) - 32;
		}
	}
	return (a);
}
