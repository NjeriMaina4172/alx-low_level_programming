#include <unistd.h>

/**
 * main - printing all the characters in c
 * @c: the character to print
 *
 * Return: Always 1 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}