#include <stdio.h>
int arrey_add(int arr[]);
int main()
{
    int arr[100]={1,2,3,4};
    printf("%d",arrey_add(arr));
    return 0;
}
int arrey_add(int arr[])
{
    int c = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        c = arr[i] + c;
    }
    return c;
}