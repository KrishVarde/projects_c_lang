#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f=NULL;
    f=fopen("abc.txt","r+");
    if (f==NULL)
    {
        printf("no such file found!");
        exit(1);
        //please refer the file in the tutorial 15 folder.
    }
    fseek(f,6,SEEK_SET);
    fprintf(f," varde ");
    int flag=ftell(f);
    printf("file modified sucsessfully!\n and the file pointer is at %d",flag);
    fclose(f);
    return 0;
}