#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, n1;

	for (n = 1; n <= 10; n++)
	{
		for (n1 = 0; n1 <= 14; n1++)
		{
			if (n1 >= 10)
				_putchar('1');
			_putchar(n1 % 10 + '0');
		}
		_putchar('\n');
	}

}

