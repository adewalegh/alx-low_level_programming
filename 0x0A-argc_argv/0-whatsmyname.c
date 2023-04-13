#include <stdio.h>
#include "main.h"

/**
 * main - name of the program
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

