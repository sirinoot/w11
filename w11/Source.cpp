#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void displayArray(int arr[3][3]);

int main()
{
    int arr[3][3], i, j;
    printf("Please enter 9 numbers for the array: \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    displayArray(arr);
    return 0;
}

void displayArray(int arr[3][3])
{
    int i, j;
    printf("The complete array is: \n");
    for (i = 0; i < 3; ++i)
    {
        printf("\n");
        for (j = 0; j < 3; ++j)
        {
            printf("%d\t", arr[i][j]);
        }
    }
}