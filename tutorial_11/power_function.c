#include <stdio.h>
int power_fun(float x, int y)
{
    for (int i = 0; i < y - 1; i++)
    {
        x = x * x;
    }
    return x;
}
void main()
{
    printf("%f", power_fun(2, 6));
}