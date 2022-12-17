#include "main.h"
#include <string.h>

/**
 * _strpbrk - earches for the occurence of a string
 * @s: the string
 * @accept: string occurence
 *
 * Return: pointer to s matching that in accept
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}