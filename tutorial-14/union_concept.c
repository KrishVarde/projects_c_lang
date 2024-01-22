#include<stdio.h>
int main()
{
    union data
    {
        int a[100];
        char b;
    };
    struct Data
    {
        int a[100];
        char b;
    };
    printf("\n\nthe size of the union is %d",sizeof(union data));
    printf("\nthe size of the structure is %d\n\n   AND ALL SET!",sizeof(struct Data));
    
    return 0;
}