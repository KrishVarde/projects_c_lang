#include <stdio.h>
// yet to renvate

void main()
{
    char in;
    printf("enter your one digit text:");
    scanf("%d", &in);
    if (in >= 65 && in <= 90 || in >= 97 && in <= 122)
    {
        printf("you entered charecter");
    }
    else if (in >= 32 && in <= 47 || in >= 58 && in <= 64 || in >= 91 && in <= 96 || in >= 123 && in <= 126)
    {
        printf("\nentered value is special charecter");
    }
    else
        printf("the value is number");
}