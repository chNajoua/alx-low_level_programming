#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: copie of memory area
 * @src: memory area
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}
