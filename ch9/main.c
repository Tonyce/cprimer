#include <stdio.h>

#include "imin.h"

void up_and_down(int);

int main(void)
{
    printf("hello world\n");

    int evil1, evil2;
    printf("enter a pair of integer (q to quit):\n");
    while ((scanf("%d %d", &evil1, &evil2)) == 2)
    {
        printf("%d, %d, %d\n", evil1, evil2, imin(evil1, evil2));
        printf("enter again\n");
    }
    

//    up_and_down(1);
    return 0;
}


void up_and_down(int n)
{
    printf("Level %d, n location %p\n", n, &n);
    if (n < 4)
    {
        up_and_down(n + 1);
    }
    printf("Level %d, n location %p\n", n, &n);
}