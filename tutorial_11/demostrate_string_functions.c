#include <string.h>
#include <stdio.h>
void main()
{
    char s1[100];
    char s2[100];
    printf("string_1=");
    gets(s1);
    printf("string_2=");
    gets(s2);
    printf("entered string 1: ");
    puts(s1);
    printf("entered string 2: ");
    puts(s2);
    printf("string comparison: ");
    if (strcmp(s1, s2) == 0)
        printf("same");
    // for copying string strcpy();
}