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
	long long int lli;
	float e;

	printf("Size of a char: %lu ", sizeof(c));
	printf("Size of an int: %lu ", sizeof(i));
	printf("Size of a long int: %lu ", sizeof(li));
	printf("Size of a long long int: %lu ", sizeof(lli));
	printf("Size of a float: %lu ", sizeof(e));
	return (0);
}
