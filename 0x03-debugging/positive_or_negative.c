#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints  if a number is positive or negative.
 * Return: 0
 */
int main(void)
{
        int i;

        srand(time(0));
        i = rand() - RAND_MAX / 2;
        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else if (i < 0)
        {
                printf("%d is negative\n",i);
        }
        return (0);
}
