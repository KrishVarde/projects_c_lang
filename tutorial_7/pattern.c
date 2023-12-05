#include<stdio.h>
int main()
{
    int n=5;
    for (int i = 65; i <=n+65; i++)
    {
        for (int j = n; j >=i-64; j--)
        {
            printf("%c",i);
        }
        printf("\n");
        
    }
    
}