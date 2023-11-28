#include <stdio.h>
#include <string.h>
int arr_add(int arr1[], int arr2[]);
int main()
{
    int s1[100] = {1, 2, 3, 4, 5, 96}, s2[100] = {9, 8, 7, 69, 5, 4};
    for (int i = 0; i<9; i++)
    {
        printf(" %d ", arr_add(s1, s2));
    }
}
int arr_add(int arr1[], int arr2[])
{
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    if (size1 == size2)
    {
        int r[100];
        for (int i = 0; i < 9; i++)
        {
            r[i] = arr1[i] + arr2[i];
            return r[i];
        }
    }
    else
    {
        return 0;
    }
}