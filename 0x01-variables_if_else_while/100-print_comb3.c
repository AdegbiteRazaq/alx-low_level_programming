#include <stdio.h>
/**
 *main - Prints combination of two digits.
 *
 *Return: Always 0;
 *
 **/
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (b > a)
			{
				putchar(a + '0');
				putchar(b + '0');

				if (b != 9  || a != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
