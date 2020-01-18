#include <stdio.h>
#include <string.h>

#define DENSITY 62.4
#define PRAISE "You are an extraordinary being"
#define PI 3.1415926

void talkback(void)
{
    float weight, volume;
    int size, letters;
    char name[40];
    printf("Hi, what's your name?");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;

    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);
}

void praise(void)
{
    char name[40];
    printf("What's your name?\n"); // “scanf()只读取了Angela Plains中的Angela，它在遇到第1个空白（空格、制表符或换行符）时就不再读取输入。”
    scanf("%s", name);
    printf("hello %s, %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));
    printf("The phrase of praise has %zd letters", strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
}

void pizza(void)
{
    float area, circum, radius;
    printf("What is th radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);
}

#define PAGES 336
#define WORDS 65618

void intconv(void)
{
    short num = PAGES;
    short mnum = -PAGES;
    printf("num as short and unsigned short: %hd, %hd\n", num, mnum);
    printf("-num as short and unsigned short: %hd, %hu\n", mnum, mnum);
}

int main(void)
{
    // talkback();
    // praise();
    // pizza();
    intconv();
    return 0;
}