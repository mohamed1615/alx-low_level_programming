#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabets in lower and upper cases
 *Return: Always 0 (Success)
*/
int main(void)
{
	char letter_lower = 'a';
	char letter_upper = 'A';

	while (letter_lower <= 'z')
	{
		putchar(letter_lower);
		letter_lower++;
	}
	while (letter_upper <= 'Z')
	{
		putchar(letter_upper);
		letter_upper++;
	}
	putchar('\n');
	return (0);
}
