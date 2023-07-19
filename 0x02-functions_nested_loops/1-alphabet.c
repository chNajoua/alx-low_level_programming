#include <main.h>
/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
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
