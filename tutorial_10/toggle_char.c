#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    printf("enter your text: ");
    scanf("%s", &s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        // upper case
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
    printf("%s", s);
    // for makiing character capital (-32) and for making charecter small(+32) from ASCII value
}