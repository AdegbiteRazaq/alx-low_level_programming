#include "main.h"
/**
 *print_alphabet - Prints small letters of the alphabet.
 *
 *
 *Return: void
 */
void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
