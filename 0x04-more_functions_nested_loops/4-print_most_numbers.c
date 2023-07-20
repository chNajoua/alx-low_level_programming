#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; i++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar (c);
	}
	_putchar ('\n');
	return (0);
}
