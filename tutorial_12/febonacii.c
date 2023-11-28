#include <stdio.h>
int febo(int n);
int main()
{
    int a;
    printf("enter the number of terms you want to print:");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", febo(i));
    }
    return 0;
}
int febo(int n)
{
    if(n<=1)
    return n;
    else
    return febo(n-1)+febo(n-2);
}