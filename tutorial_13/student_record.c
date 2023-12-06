#include <stdio.h>
#include <string.h>
int main()
{
    // declared stucture or union its your choice :)
    union student_record
    {
        char name[20];
        int en_num;
        int sub_marks[3];
        char grade[3];
    } stu[5];

    // record its also your choice :)
    strcpy(stu[0].name, "chaganlal");
    stu[0].en_num = 201229;
    stu[0].sub_marks[0] = 80;
    stu[0].sub_marks[1] = 91;
    stu[0].sub_marks[2] = 50;

    strcpy(stu[1].name, "maganlal");
    stu[1].en_num = 201230;
    stu[1].sub_marks[0] = 78;
    stu[1].sub_marks[1] = 95;
    stu[1].sub_marks[2] = 14;

    strcpy(stu[2].name, "jethalal");
    stu[2].en_num = 201231;
    stu[2].sub_marks[0] = 60;
    stu[2].sub_marks[1] = 99;
    stu[2].sub_marks[2] = 40;

    strcpy(stu[3].name, "lalulal");
    stu[3].en_num = 201232;
    stu[3].sub_marks[0] = 83;
    stu[3].sub_marks[1] = 70;
    stu[3].sub_marks[2] = 60;

    strcpy(stu[4].name, "mangasingh");
    stu[4].en_num = 201233;
    stu[4].sub_marks[0] = 70;
    stu[4].sub_marks[1] = 90;
    stu[4].sub_marks[2] = 80;

    // dispaly grade its not choice its fixed :)
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (stu[i].sub_marks[j] <= 100 && stu[i].sub_marks[j] >= 80)
            {
                stu[i].grade[j]='A';
            }
            else if (stu[i].sub_marks[j] <= 79 && stu[i].sub_marks[j] >= 60)
                stu[i].grade[j]='B';
            else if (stu[i].sub_marks[j] <= 59 && stu[i].sub_marks[j] >= 40)
                stu[i].grade[j]='C';
            else if (stu[i].sub_marks[j] < 40)
                stu[i].grade[j]='F';
        }
    }

    //comparing and saying who has topped...
    for (int i = 0; i < 5; i++)
    {
        
    }
    
    return 0;
}