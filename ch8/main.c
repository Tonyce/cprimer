#include <stdio.h>

char get_choice(void);
void count(void);

int main(void)
{
    printf("hello world\n");
    // char ch;
    // while ((ch = getchar()) != '#')
    // {
    //     putchar(ch);
    // }
    putchar('a');
    /*
    int choice;
    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
        case 'a':
            printf("Buy low, sell hight.\n");
            break;
        case 'b':
            putchar('\a');
            break;
        case 'c':
            count();
            break;
        default:
            printf("Program error!\n");
            break;
        }
    }
    */
    return 0;
}

char get_choice(void)
{
    int ch;
    printf("Enter the letter of your choice: \n");

    while (
        (ch = getchar()) &&
        (ch < 'a' || ch > 'c') && ch != 'q')
    {
        printf("Please response with a, b, c, or q\n");
    }
    return ch;
}

void count(void)
{
    int n, i;
    printf("Count　how　far?　Enter　an　integer:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d\n", i);
}