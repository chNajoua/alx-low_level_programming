#include "main.h"
/**
 * _strpbrk - function searches a string for a set of bytes
 * @s: pointer
 * @accept: string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
			if (accept[j] != '\0')
			{
				return (s + 1);
			}
	}
		return (0);
}
