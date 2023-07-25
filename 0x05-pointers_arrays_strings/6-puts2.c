include "main.h"
/**
 * puts2 - function that prints character of a string
 * @str: paremeter
 * Return: 0
 */
void puts2(char *str)
{
	int i, lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; i < lenght; i++)
	{
		if (str[i] % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
