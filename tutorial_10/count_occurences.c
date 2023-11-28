#include <stdio.h>
#include <string.h>
void main()
{
  int count = 0;
  char s[100], c;
  printf("enter the phrase ");
  scanf("%s", &s);
  printf("\nenter which charecter you want to find occurence of: ");
  c = getchar();
  for (int i = 0; s[i] != '\0'; i++)
  {
    if (s[i] == c)
    {
      count++;
    }
  }
  printf("\n%d", count);
}
