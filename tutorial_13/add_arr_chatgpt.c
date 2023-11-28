#include <stdio.h>

void arrayAddition(int arr1[], int arr2[], int result[], int size);

int main() {
    int s1[100] = {1, 2, 3, 4, 5, 96}, s2[100] = {9, 8, 7, 69, 5, 4};
    int result[100];

    // Choose the smaller size to avoid accessing beyond the bounds of the smaller array
    int size = sizeof(s1) / sizeof(s1[0]);
    if (sizeof(s2) / sizeof(s2[0]) < size) {
        size = sizeof(s2) / sizeof(s2[0]);
    }

    arrayAddition(s1, s2, result, size);

    printf("Result of addition: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

void arrayAddition(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}
