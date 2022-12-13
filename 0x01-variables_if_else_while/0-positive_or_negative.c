#include <stdib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printss if the number i positive, negative or 0
 * Returns:; Alway 0
 */
int maain(void)
{
	int n:

        srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
        {
	       printf("%d is positive\n", n);
	}	
	else if (n == 0)
	
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
        }

	return (0)/
