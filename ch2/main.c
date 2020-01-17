#include <stdio.h>

void butler(void);
int main(void)
{
    int num;
    num = 1;
    printf("I am a simple ");
    printf("computer\n");
    butler();
    int a, b;
    a = 5;
    b = 2; /* 第7行 */
    b = a; /* 第8行 */
    a = b; /* 第9行 */
    printf("%d　%d\n", b, a);
    return 0;
}

void butler(void)
{
    printf("butler \n");
}