#include <stdio.h>

void add_arr(int a[], int b[], int c[]);

int main()
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {1, 2, 3, 4};
    int arr[4];

    add_arr(arr1, arr2, arr);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void add_arr(int a[], int b[], int c[])
{
    for (int i = 0; i < 4; i++)
    {
        c[i] = a[i] + b[i];
    }
}
