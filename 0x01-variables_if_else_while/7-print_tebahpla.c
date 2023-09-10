#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabets in lower and upper cases
 *Return: Always 0 (Success)
*/
int main(void)
{
	char i = 'z';
	
	while (i <= 'z' && i >= 'a')
	{
	    putchar(i);
	    i--;
    }
    putchar('\n');
}