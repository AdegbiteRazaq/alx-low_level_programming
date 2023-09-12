#include "main.h"
/**
*print_alphabet_x10 - Prints alphabet lowercase ten times.
*
*
*Return: void
*/
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
