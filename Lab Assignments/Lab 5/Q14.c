#include <stdio.h>

int main() { // Start Main
    int Age, Income, Credit;

    // Input
    printf("Enter Age: ");
    scanf("%d", &Age);
    printf("Enter Income: Rs. ");
    scanf("%d", &Income);
    printf("Enter Credit Score (300 to 850): ");
    scanf("%d", &Credit);

    // Process/Output
     if ((Age >= 18) && (Income >= 50000) && (Credit >= 600 && Credit <= 850)) {
        printf("You are eligible for loan.\n");
    } else {
        printf("You aren't eligible for loan.\n");
    }

    return 0;
} // End Main
