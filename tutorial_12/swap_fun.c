#include <stdio.h>
int a, b;
int swap(int *a, int *b);
int main()
{
    printf("enter a=");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    swap(&a, &b);
    printf("\nswaped a = %d", a);
    printf("\nswaped b = %d", b);
    return 0;
}
int swap(int *a,int  *b)
{
    //using pointer here because we need to change information outside the body of function.
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return 0;
}