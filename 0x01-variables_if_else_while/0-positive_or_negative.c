#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check if n is a positive, negative or equals to zero
 *
 * retur Always 0
 *
 */

int main(voi)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is a negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is a positve\n", n);
	}
	else
	{
		printf("%d is a zero\n", n);
	}

	return (0);
}
