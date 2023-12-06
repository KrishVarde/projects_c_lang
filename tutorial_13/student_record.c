#include <stdio.h>
int main()
{
    int g;
    //declared stucture or union its your choice :)
    union student_record
    {
        char name[20];
        int en_num;
        int sub1_marks[3];
    }stu[5];
    
    //record its also your choice :)
    stu[0]={"chaganlal",{201229,80,91,50}};
    stu[1]={"maganlal",{201230,78,95,14}};
    stu[2]={"gaganlal",{201231,60,99,40}};
    stu[3]={"lalulal",{201232,83,70,60}};
    stu[4]={"mangasingh",{201233,70,90,80}};

    //dispaly grade its not choice its fixed :)

    if (g <= 100 && g >= 80)
    {
        printf("distination");
    }
    else if (g <= 79 && g >= 60)
        printf("first class");
    else if (g <= 59 && g >= 40)
        printf("second class");
    else if (g < 40)
        printf("fail");
    return 0;
}