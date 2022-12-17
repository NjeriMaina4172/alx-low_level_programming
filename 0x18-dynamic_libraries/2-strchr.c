#include "main.h"
#include <string.h>

/**
 * _strchr - locate a character of strings
 * @s: the string
 * @c: the characters to locate
 *
 * Return: a pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}