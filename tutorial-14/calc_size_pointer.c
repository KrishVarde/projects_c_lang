#include <stdio.h>
int calc_size(char *);
int main()
{
    char str[100];
    printf("\nplease enter string:");
    scanf("%s", &str);
    printf("the size of the function is %d", calc_size(&str));
    return 0;
}
int calc_size(char *s)
{
    int i = 0;
a:
    if (s[i] != '\0')
    {
        i++;
        goto a;
    }
    return i;
}