#include "main.h"
/**
 * print_square - function that prints a square
 * @size: is a var
 * Return:
 */
void print_square(int size)
{
	int m;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
