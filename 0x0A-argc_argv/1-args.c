#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguements it receives
 * @argc: arguement counter
 * @argv: pointer to an array of arguements
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
