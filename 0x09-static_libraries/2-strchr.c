#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: pointer
 * @c: character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (s[i] == c)
		return (s);
	else
		return (0);
}
