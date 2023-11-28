#include <stdio.h>
int fact(int n);
int main()
{
    int a;
    printf("enter the number to find factorial:");
    scanf("%d", &a);
    printf("%d", fact(a));
    return 0;
}
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
    {
        int f;
        f = n * fact(n - 1);
        return f;
    }
}