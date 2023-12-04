#include<stdio.h>
int main()
{
    int n=8,ans=0;
    for (int i = 1; i <= n; i++)
    {
       ans=ans+i*i; 
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d^2+",i);
    }
    printf("\b=%d\n",ans);
    return 0;
}