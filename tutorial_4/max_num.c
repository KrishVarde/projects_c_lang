#include <stdio.h>
void main()
{
    int num_1, num_2, num_3;
    printf("enter your three numbers: ");
    scanf("%d%d%d", &num_1, &num_2, &num_3);
    if (num_1 > num_2)
    {
        if (num_1 > num_3)
        {
            printf("largest number is %d", num_1);
        }
        else
            printf("largest number is %d", num_3);
    }
    else if (num_2 > num_3)
    {
        printf("largest number is %d", num_2);
    }
    else
        printf("largest number is %d", num_3);
}