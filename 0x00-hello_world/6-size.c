#include <stdio.h>

/**
 * main - computer size
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizof(char));
	printf("Size of a int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizof(long int));
	printf("Size of a long long int: %lu byte(s)", sizof(long long int));
	printf("Size of a float: %lu byte(s)", sizof(float));
	return (0);
}
