#include <stdio.h>
void main()
{
    int g;
    printf("enter your grade:");
    scanf("%d", &g);
    if (g <= 100 && g >= 80)
    {
        printf("distination");
    }
    else if (g <= 79 && g >= 60)
        printf("first class");
    else if (g <= 59 && g >= 40)
        printf("second class");
    else if (g < 40)
        printf("fail");
    else
        printf("naughty hora bhen ke lau*e?");
}