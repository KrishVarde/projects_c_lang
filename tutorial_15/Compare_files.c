#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    int flag = 0;
    char content1[100], content2[100];
    fp1 = fopen("abc.txt", "r");
    fp2 = fopen("cba.txt", "r");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("no such file found!");
        return 1;
    }
    fseek(fp1, 0, SEEK_END);
    fseek(fp2, 0, SEEK_END);
    int ps1 = ftell(fp1);
    int ps2 = ftell(fp2);
    fseek(fp1, 0, SEEK_SET);
    fseek(fp2, 0, SEEK_SET);

    for (int i = 0; i < ps1; i++)
    {
        content1[i] = fgetc(fp1);
        printf("\nchar [%d] is %c", i, content1[i]);
    }
    for (int i = 0; i < ps2; i++)
    {
        content2[i] = fgetc(fp2);
        printf("\nchar [%d] is %c", i, content2[i]);
    }
    for (int i = 0; i <= ps2; i++)
    {
        if (content1[i] != content2[i])
        {
            flag = 1;
        }
    }
    fclose(fp1);
    fclose(fp2);
    printf("\nfiles compared sucessfully!");
    if (flag == 1)
    {
        printf("\nfiles does not have same content!");
    }
    else
        printf("\nfiles have same content!");
    return 0;
}