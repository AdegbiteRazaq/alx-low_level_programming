#include <stdio.h>

/**
*main - Prints the alphabet in small letter.
*
*Return: Always 0.
*
**/
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);

}
