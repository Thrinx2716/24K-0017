#include <stdio.h>

int main() { // Start Main
    int Number, NumMod;
    int Total = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &Number);

    // Process
    while (Number > 0) {
        NumMod = Number % 10;
        Total = Total + NumMod;
        Number = Number / 10;
        }

    // Output
    printf("The sum of digits in the given number is %d.", Total);

    return 0;
} // End Main