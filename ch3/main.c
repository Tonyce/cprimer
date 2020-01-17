#include <stdio.h>

void butler(void);
int main(void)
{
    float weight;
    float value;
    scanf("%f", &weight);
    printf("printf \n");
    printf("out put %0.2f, %0.2f", weight, value);
    return 0;
}

void butler(void)
{
    printf("butler \n");
}