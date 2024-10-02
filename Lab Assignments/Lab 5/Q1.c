#include <stdio.h>

int main() { // Start Main
    int Age;

    // Input
    printf("Enter age in years: ");
    scanf("%d", &Age);

    // Process/Output
    if (Age >= 0) {
        if (Age <= 12) {
            printf("You are a child.");
        } else {
            if (Age <= 19) {
                printf("You are a teenager.");
            } else {
                if (Age <= 60) {
                    printf("You are an adult.");
                } else {
                    printf("You are a senior.");
                }
            }
        }
    } else {
        printf("Invalid age.");
    }

    return 0;
} // End Main
