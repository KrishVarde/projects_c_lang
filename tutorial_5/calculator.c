#include <stdio.h>
void main()
{
    int a, b;
    char c;
    printf("please enter the equation with space at the end of each elemet:");
    scanf("%d %c %d", &a, &c, &b);
    switch (c)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a+b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    default:
    printf("plz enter valid things");
        break;
    }
}