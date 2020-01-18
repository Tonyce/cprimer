#include <stdio.h>

#define ADJUST 7.31
void shoes(void)
{
    const double SCALE = 0.333;
    double shoe, foot;
    printf("Shoe size (men's) foot length\n");
    shoe = 3.0;
    while (shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f  %15.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }
    printf("If the shoe fits, wear it.\n");
}

void size_of(void)
{
    int n = 0;
    size_t intsize;
    intsize = sizeof(n);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof(n), intsize);
}

void post_pre(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;
    a_post = a++;
    pre_b = ++b;
    printf("%d, %d\n", a, b);
    printf("%d, %d", a_post, pre_b);
}

void pound(int);
int main(void)
{
    int the_year = 2020;
    printf("hello world, %d\n", the_year);
    // shoes();
    // size_of();
    // post_pre();
    int times = 5;
    char ch = '!';
    float f = 6.0f;
    pound(times);
    pound(ch);
    pound(f);
    return 0;
}

void pound(int n)
{
    while (n-- > 0)
    {
        printf("#");
    }
    printf("\n");
}