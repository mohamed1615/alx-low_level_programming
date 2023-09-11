#include <stdio.h>

/**
 * main- prints single digits combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		n++;
	}

	return (0);
}
