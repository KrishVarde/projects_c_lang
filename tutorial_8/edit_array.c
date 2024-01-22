#include<stdio.h>

int main() {
    int n;
    int arr[100] = {1, 2, 4, 5, 6, 7, 89, 0}; // Initialize with zeros
    printf("Please select:\n1. Remove element from array\n2. Add element to array\n");
    scanf("%d", &n);

    if (n == 1) {
        int c;
        printf("Enter the index of the element you want to remove: ");
        scanf("%d", &c);

        // Shift elements to the left to remove the selected element
        for (int i = c; arr[i] != 0; i++) {
            arr[i] = arr[i + 1];
        }
    } else {
        int c, e;
        printf("Enter the index where you want to insert the element: ");
        scanf("%d", &c);

        printf("\nEnter the number you want to insert: ");
        scanf("%d", &e);

        // Shift elements to the right to make space for the new element
        for (int i = 99; i >= c; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the new element
        arr[c] = e;
    }

    // Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < 100; i++) {
        if (arr[i] != 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
