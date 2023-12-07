#include <stdio.h>
int main()
{
    // declared stucture or union its your choice :)
    struct cricket
    {
        char name[100];
        int avg;
        char team[100];
    };

    // Array of struct instances
    struct cricket P[5] = {
        {"chaganlal", 200, "team_1"},
        {"maganlal", 700, "team_1"},
        {"jethalal champaklal ghada", 100000, "team_1"},
        {"aaiyar", 800, "team_1"},
        {"mangal singh", 10, "team_1"}};
    return 0;
}
