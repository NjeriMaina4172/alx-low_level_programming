#include "main.h"
#include <string.h>

/**
 * _memset - fill the first n bytes of s with char at c
 * @s: the pointer to s
 * @b: characters to fill with
 * @n: the number of bytes
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}