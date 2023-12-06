#include<stdio.h>
int add_arr(int [],int [],int []);


//we can do this without pointers too you can check tempCOderunnerfile.c for it...


int main()
{
    int arr1[9]={1,2,3,4};
    int arr2[9]={1,2,3,4};
    int arr[9];
    add_arr(arr1,arr2,arr);
    for (int i = 0; i < 4; i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}
int add_arr(int a[],int b[],int c[])
{
    a[0]=*a;
    b[0]=*b;
    c[0]=*c;
    for (int i = 0; i < 4; i++)
    {
        *c=*a+*b;
        *a++,*b++,*c++;
    }
    return 0;
}