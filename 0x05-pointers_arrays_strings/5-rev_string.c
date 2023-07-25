#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * @s: parametre
 * Return: 0
 */
void rev_string(char *s)
{
	int i, lenght = strlen(s);
	char R;

	for (i = 0; i <  strlen(s) / 2; i++)
	{
		R = s[i];
		s[i] = s[lenght - 1 - i];
		s[lenght - 1 - i] = R;
	}
}
