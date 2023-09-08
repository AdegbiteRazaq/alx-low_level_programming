#include <stdio.h>

/**
*main - Prints the alphabet in small letter and capital letter.
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
	for (a = 65; a < 91; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);

}
