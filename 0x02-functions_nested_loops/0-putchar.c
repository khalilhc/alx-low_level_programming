#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alway 0 (Sucess)
 */

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int ctr, sz;

	sz = sizeof(str) / sizeof(int);

	for (ctr = 0; ctr < sz; ctr++)
	{
		_putchar(str[ctr]);
	}
	_putchar('\n');
	return (0);
}
