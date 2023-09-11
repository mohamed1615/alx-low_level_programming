#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabets in lower and upper cases
 *Return: Always 0 (Success)
*/
int main(void)
{
	char i = '0';
	char n = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
