#include<stdio.h>
int main()
{
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j)%2)
            {
                printf("0");
            }
            else
            printf("1");
        }
        
    printf("\n");
    }
    return 0;
}