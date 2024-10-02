#include <stdio.h>

int main() { // Start Main
    int Year;

    // Input
    printf("Enter a year: ");
    scanf("%d", &Year);

    // Process/Output
    if (Year % 400 == 0){
        printf("%d is a leap year.", Year);
    } else if (Year % 4 == 0 && Year % 100 != 0){
        printf("%d is a leap year.", Year);
    }
    else {
        printf("%d is not a leap year.", Year);
    }

    return 0;
} // End Main
