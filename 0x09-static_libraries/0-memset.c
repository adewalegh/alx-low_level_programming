#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @n: number of bytes changed
 * @s: memory to be filled
 * @b: desired value
 *
 * Return: memory changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
