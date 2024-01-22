#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f=NULL;
    char cont[100];
    f=fopen("abc.txt","r");
    if (f==NULL)
    {
        printf("no such file found");
        exit(1);
    }
    fscanf(f,"%s",cont);
    printf("the value in the file is : %s",cont);
    fclose(f);
    fopen("cba.txt","a");
    if (f==NULL)
    {
        printf("no such file found");
        exit(1);
    }
    fprintf(f,"\n");
    fputs(cont,f);
    fclose(f);
    printf("\n content copied!");
    return 0;
}