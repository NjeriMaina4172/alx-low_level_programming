#include "main.h"
#include <stdio.h>

/**
 * _puts - printa a string
 * @str: input parameter
 *
 * Description: uses pointers
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
