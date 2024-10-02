#include <stdio.h>

int main() { // Start Main
    int Number;
    int Count = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &Number);

    // Process
    while (Number > 0) {
        Count = Count + (Number & 1);
        Number = Number >> 1;
    }

    // Output
    printf("The number of 1s in the binary representation of the given number is: %d", Count);

    return 0;
} // End Main
