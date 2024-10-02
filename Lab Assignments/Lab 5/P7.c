#include <stdio.h>

int main() { // Start Main
    int Num1, Num2;

    // Input
    printf("Enter Number 1: ");
    scanf("%d", &Num1);
    printf("Enter Number 2: ");
    scanf("%d", &Num2);

    // Process
    printf("Pre-swap: Number 1 = %d, Number 2 = %d\n", Num1, Num2);
    Num1 = Num1 ^ Num2;
    Num2 = Num1 ^ Num2;
    Num1 = Num1 ^ Num2;

    // Output
    printf("Post-swap: Number 1 = %d, Number 2 = %d", Num1, Num2);

    return 0;
} // End Main