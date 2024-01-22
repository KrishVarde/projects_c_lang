#include <stdio.h>
int fun(int *a)
{
    int b;
    b = *a + 10;
    return b;
}
int main()
{
    int i;
    int *ptr = &i;
    printf("\nplease enter the number:");
    scanf("%d", &i);
    printf("\nthe number+10=%d", fun(&i));
    return 0;
}