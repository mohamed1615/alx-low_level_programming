#include <stdio>

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
		putchar(',');
		putchar(' ');
		n++;
	}
	return (0);
}
