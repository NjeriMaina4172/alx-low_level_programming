#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: the pointer to hold copied data
 * @src: source of the dat
 * @n: the number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}