#include <string.h>
#include <stdio.h>
void main()
{
    char s1[100], s2[100], s3[100];
    printf("enter the phrase ");
    gets(s1);
    strcpy(s2, s1);
    strrev(s2);
    if (strcmp(s1, s2) == 0)
        printf("\n[ palidrome ] ");
    else
        printf("\n[ not palidrome ] ");
}