#include "main.h"

int _strlen(char *s);

/**
 * print_rev - prints string in reverse, followed by new line
 * @s: string to be printed in reverse
 * Return: nothing
 *
 */



void print_rev(char *s)
{
	int i = 0;
	int len;

	len = _strlen(s);

	while (len > i)
	{
		len--;
		_putchar(*(s + len));
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be determined
 * Return: Always 0
 */



int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++) /*counts characters in string until \0. */
		a++;

	return (a);
}
