#include <stdio.h>

int main(){ // Start Main
    
    // Input
    int Number;
    printf("Enter a number: ");
    scanf("%d", &Number);

    // Process/Output
    if (Number > 0){
        if (Number % 2 == 0){
            printf("%d is an Even", Number);
        }
        else {
            printf("%d is an Odd", Number);
        }
        printf(" Positive Number.");
    } else if (Number < 0) {
        printf("%d is a Negative Number.", Number);
    } 
    else {
        printf("Number is zero.");
    }

    return 0;
} // End Main