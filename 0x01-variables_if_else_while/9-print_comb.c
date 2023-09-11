#include <stdio.h>

/**
 * main- prints single digits combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 9)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('9');
	return (0);
}
