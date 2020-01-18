#include <stdio.h>

#define MONTHS 12
void print_array(void)
{
    const int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    for (index = 0; index < MONTHS; index++)
    {
        printf("Month %2d has %2d days\n", index + 1, days[index]);
    }
}

// int sum(int *arr, int n)
int sum(int arr[], int n)
{
    int i;
    int total = 0;
    for (i = 0; i < n; i++)
    {
        total += arr[n];
    }
    return total;
}
#define SIZE 10
int sump(int *start, int *end)
{
    int total = 0;
    while (start < end)
    {
        total += *start;
        start += 1;
    }
    return total;
}
int main(void)
{
    printf("hello world\n");
    // print_array();
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int sum_result = sum(array, 2);
    int sum_result = sump(array, array + SIZE);
    printf("%d\n", sum_result);
    return 0;
}