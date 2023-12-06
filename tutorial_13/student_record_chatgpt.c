#include <stdio.h>
#include <string.h>

// Let's make it a super awesome kid's club! 😄🎉
struct SuperKidRecord
{
    char name[20];
    int superheroIndex;  // Each superhero has its own unique power! 💪✨
    int coolnessLevel;   // How cool is this kid? Ice cream level cool! 🍦😎
} superKids[5];

int main()
{
    // Our cool superheroes are getting ready for action! 💥🚀

    // Superhero Recruitment! 🦸‍♂️✨
    strcpy(superKids[0].name, "Super Chaganlal");
    superKids[0].superheroIndex = 1;
    superKids[0].coolnessLevel = 98;  // So cool, ice cream gets jealous! 🍦😎

    strcpy(superKids[1].name, "Mega Maganlal");
    superKids[1].superheroIndex = 2;
    superKids[1].coolnessLevel = 95;  // Almost as cool as an ice cream truck! 🍦😄

    strcpy(superKids[2].name, "Jolly Jethalal");
    superKids[2].superheroIndex = 3;
    superKids[2].coolnessLevel = 80;  // Ice cream wishes it were this cool! 🍦😁

    strcpy(superKids[3].name, "Lala Lalulal");
    superKids[3].superheroIndex = 4;
    superKids[3].coolnessLevel = 75;  // Ice cream might need a sweater! 🍦🥶

    strcpy(superKids[4].name, "Mighty Mangasingh");
    superKids[4].superheroIndex = 5;
    superKids[4].coolnessLevel = 99;  // Super cool, even for ice cream standards! 🍦🌟

    // Superhero Showdown! 💥🏆
    int coolestKidIndex = 0;

    for (int i = 1; i < 5; i++)
    {
        // Let's find out who's the coolest superhero!
        if (superKids[i].coolnessLevel > superKids[coolestKidIndex].coolnessLevel)
        {
            coolestKidIndex = i;
        }
    }

    // And the winner is... 🎉🏆
    printf("And the coolest superhero is...\n");
    printf("🌟 %s! 🌟\n", superKids[coolestKidIndex].name);
    printf("With a coolness level of %d, this superhero is on fire! 🔥😎\n", superKids[coolestKidIndex].coolnessLevel);

    return 0;
}
