#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reve
 * @s: string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
