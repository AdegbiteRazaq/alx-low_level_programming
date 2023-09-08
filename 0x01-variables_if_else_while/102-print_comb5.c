#include <stdio.h>
/**
 *main - Prints combination of two two digits.
 *
 *Return: Always 0.
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 99; a++)
	{
		for (b = 1; b < 100; b++)
		{
			if (b > a)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if ((a == 98) && (b == 99))
					continue;
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
