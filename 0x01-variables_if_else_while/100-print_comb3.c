#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens = 0;
	int ones;

	while (tens < 9)
	{
		ones = tens + 1;
		while (ones <= 9)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens != 8 || ones != 9)
			{
				putchar(',');
				putchar(' ');
			}
			ones++;
		}
		tens++;
	}
	putchar('\n');
	return (0);
}
