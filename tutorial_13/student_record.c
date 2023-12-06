#include <stdio.h>
#include <string.h>
int main()
{
    // declared stucture or union its your choice :)
    struct StudentRecord {
        char name[20];
        int en_num;
        int sub_marks[3];
        char grade[3];
        int total[3];
    };

    // Array of struct instances
    struct StudentRecord stu[5] = {
        {"chaganlal", 201229, {80, 91, 50}},
        {"maganlal", 201230, {78, 95, 14}},
        {"jethalal", 201231, {99, 99, 100}},
        {"aiyar", 201232, {0, 12, 1}},
        {"mangasingh", 201233, {70, 90, 80}}
    };

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
    //we need to first make total
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            stu[i].total[i]=stu[i].sub_marks[j]+stu[i].total[i];
        }
        
    }
    

    return 0;
}