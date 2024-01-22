#include<stdio.h>

int add(int *);

int main() {
    int a[100];
    printf("Please enter numbers to add (enter zero to terminate): ");

    int i;
    for (i = 0; ; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0) {
            break;
        }
    }

    add(a);
    return 0;
}

int add(int *a) {
    int l = 0, z;
    for (int i = 0; (z = a[i]) != 0; i++) {
        l += z;
    }

    printf("Sum: %d\n", l);
    return l;
}
