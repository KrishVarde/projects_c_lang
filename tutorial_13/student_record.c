#include <stdio.h>
#include <string.h>
int main()
{
    int a[5], b;
    // declared stucture or union its your choice :)
    struct StudentRecord
    {
        char name[100];
        int en_num;
        int sub_marks[3];
        char grade[3];
        int total;
    };

    // Array of struct instances
    struct StudentRecord stu[5] = {
        {"chaganlal", 201229, {80, 91, 50}, {0, 0, 0}},
        {"maganlal", 201230, {78, 95, 14}, {0, 0, 0}},
        {"jethalal champaklal ghada", 201231, {99, 99, 100}, {0, 0, 0}},
        {"aaiyar", 201232, {0, 12, 1}, {0, 0, 0}},
        {"mangal singh", 201233, {70, 90, 80}, {0, 0, 0}}};

    // dispaly grade its not choice its fixed :)
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (stu[i].sub_marks[j] <= 100 && stu[i].sub_marks[j] >= 80)
            {
                stu[i].grade[j] = 'A';
            }
            else if (stu[i].sub_marks[j] <= 79 && stu[i].sub_marks[j] >= 60)
                stu[i].grade[j] = 'B';
            else if (stu[i].sub_marks[j] <= 59 && stu[i].sub_marks[j] >= 40)
                stu[i].grade[j] = 'C';
            else if (stu[i].sub_marks[j] < 40)
                stu[i].grade[j] = 'F';
        }
    }

    // comparing and saying who has topped...
    // we need to first make total
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            stu[i].total = stu[i].sub_marks[j] + stu[i].total;
            a[i] = stu[i].total;
        }
    }

    // declaring the topper by bubble shot

    for (int i = 4; i > 0; i--)
    {
        if (a[i] > a[i - 1])
        {
            int temp;
            temp = a[i];
            a[i] = a[i - 1];
            a[i - 1] = temp;
        }
    }
    for(int i=0;i<5;i++)
    {
        if (a[0] == stu[i].total)
        {
            b = i;
            break;
        }
    }
    printf("\n\nand the topper is......... %s with %d marks\n congratulations!", stu[b].name,stu[b].total);
    return 0;
}