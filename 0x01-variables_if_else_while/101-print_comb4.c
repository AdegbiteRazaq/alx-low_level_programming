#include <stdio.h>
/**
 *main - Prints three digits numbers.
 *
 *Return: Always 0.
 *
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			for (c = 2; c < 10; c++)
			{
				if ((c > b) && (b > a))
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a == 7 && b == 8 && c == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
