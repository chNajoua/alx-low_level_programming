#include "main.h"
/**
 * _puts_recursion - function that prints a string,
 * @s: string
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int i;
	int len = 0;

	while (s[len] != 0)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar("\n")
}
