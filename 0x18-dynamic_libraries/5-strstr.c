#include "main.h"
#include <string.h>

/**
 * _strstr - a function that locates a substring form the main string
 * @haystack: the main string
 * @needle: the substring to look for
 *
 * Return: a pointer to the beginning of the string
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}