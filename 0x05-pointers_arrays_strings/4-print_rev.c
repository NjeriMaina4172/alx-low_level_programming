#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the input value
 *
 * Declaration: function that prints a string, in revers
 * followed by a new line
 * Return: Always (0)
 */
void print_rev(char *s)
{
	int left, len, i;

	len = 0;
	left = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		len = i;
	}
	for (; len >= left; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');

}
