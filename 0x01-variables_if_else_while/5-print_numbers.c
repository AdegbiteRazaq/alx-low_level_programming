#include <stdio.h>
/**
 *main - Prints base ten number.
 *
 *Return: Always 0.
 **/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
