#include <stdio.h>

int main(){ // Start Main
    int Num1, Num2;

    // Input
    printf("Enter Number 1: ");
    scanf("%d", &Num1);
    printf("Enter Number 2: ");
    scanf("%d", &Num2);

    // Process/Output
    Num1 > Num2 ? printf("%d is greater than %d", Num1, Num2) :
    Num1 == Num2 ? printf("%d is equal to %d", Num1, Num2) :
    printf("%d is greater than %d", Num2, Num1);
    
    return 0;
} // End Main