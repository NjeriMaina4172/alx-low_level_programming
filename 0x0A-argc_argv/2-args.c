#include <stdio.h>

#include <stdlib.h>


/**
 * main - prints name of file
 * @argc: argument count
 * @argv: number of arguments compiled
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
