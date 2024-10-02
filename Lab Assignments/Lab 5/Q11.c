#include <stdio.h>

int main() { // Start Main
    int Num1, Num2, Num3;

    // Input
    printf("Enter number 1: ");
    scanf("%d", &Num1);
    printf("Enter number 2: ");
    scanf("%d", &Num2);
    printf("Enter number 3: ");
    scanf("%d", &Num3);

    // Process/Output
    if (Num1 >= Num2){
        if (Num1 >= Num3){
            printf("Number 1 is the greatest.");
        }
        else {
            printf("Number 3 is the greatest.");
        }
    }
    else if (Num2 >= Num3){
            printf("Number 2 is the greatest.");
        }
    else {
        printf("Number 3 is the greatest.");
    }

    return 0;
} // End Main
