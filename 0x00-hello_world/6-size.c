#include <stdio.h>
/**
 * main - to print the size of data types
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int;
	float e;

	printf("Size of a char: %lu bytes\n", sizeof(c));
	printf("Size of an int: %lu bytes\n", sizeof(i));
	printf("Size of a long int: %lu bytes\n", sizeof(li));
	printf("Size of a long long int: %lu bytes\n", sizeof(lli));
	printf("Size of a float: %lu bytes\n", sizeof(e));
	return (0);
}
