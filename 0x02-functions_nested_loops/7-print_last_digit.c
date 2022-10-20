#include "main.h"

/**
* print_last_digit - Prints the last digit of a number.
* @n:the number in question
*
* Return:Value of the last digit.
*/

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		lastdigit = -lastdigit;
	}
	return (last_digit);
}
