#include "main.h"
/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char character;
		for (character = 'a'; character <= 'z'; character++)
			putchar(character);
			putchar ('\n');
}
