#include<stdio.h>
int a ,b , c;
int add(int a,int b)
{
    c=a+b;
    return c;
}
int mul(int a,int b)
{
    c=a*b;
    return c;
}
int div(int a,int b)
{
    c=a/b;
    return c;
}
int sub(int a,int b)
{
    c=a-b;
    return c;
}
void main()
{
    char ch;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("operation: ");
    getchar();
    scanf("%c",&ch);
    switch (ch)
    {
    case '+':
        printf("addition is %d",add(a,b));
        break;
    case '-':
        printf("subtraction is %d",sub(a,b));
        break;
    case '*':
        printf("multiplication is %d",mul(a,b));
        break;
    case '/':
        printf("divition is %d",div(a,b));
        break;
    default:
    printf("not valid");
        break;
    }
}