#include <stdio.h>
void main()
{
    int n;
    printf("");
    scanf("%d", n);
    if (n >= 0)
    {
        if (n == 0)
            printf("zero");
        if (n > 0)
            printf("\npos");
    }
    else
        printf("\nneg");
}