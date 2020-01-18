#include <stdio.h>

void summing(void)
{
    long num;
    long sum = 0L;
    int status;
    printf("Enter a number: (q to quit)\n");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum = sum + num;
        printf("Please enter next integer\n");
        status = scanf("%ld", &num);
    }
    printf("the sum %ld", sum);
}

void boolean(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;
    printf("enter a number\n");
    input_is_good = scanf("%ld", &num) == 1;

    while (input_is_good)
    {
        sum = sum + num;
        input_is_good = scanf("%ld", &num) == 1;
    }
    printf("sum: %ld\n", sum);
}

int main(void)
{
    printf("hello world\n");
    // summing();
    boolean();
    return 0;
}