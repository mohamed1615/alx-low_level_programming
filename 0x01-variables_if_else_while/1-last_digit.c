#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return : Always 0 (Success) 
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n%10 > 0)
	{
		printf("%d is positive\n", n%10);
	}
	else if (n%10 < 0)
	{
		printf("%d is negative\n", n%10);
	}
	else
	{
		printf("%d is zero\n", n%10);
	}
	return (0);
}
