#include <stdio.h>

#define SPACE ' '
void cypher(void)
{
    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();
    }
    putchar(ch);
}

int main(void)
{
    printf("hello world\n");
    cypher();
    return 0;
}