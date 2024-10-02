#include <stdio.h>

int main(){ // Start Main
    int Number;

    // Input
    printf("Enter Number: ");
    scanf("%d", &Number);

    // Process/Output
    Number > 0 ? printf("%d is a positive number.", Number) :
    Number < 0 ? printf("%d is a negative number.", Number) :
    printf("Number is zero");
    
    return 0;
} // End Main
