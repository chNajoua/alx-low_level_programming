#include <stdio.h>
#include <main.h>
/**
 * main - check the code
 *
 * Return: 0.
 */
void print_alphabet(void);
int main(void)
{
	int character;
		for (character = 'a'; character <= 'z'; character++)
			putchar(character);
			putchar ("\n");
		return (0);
}
