#include <stdio.h>

int main(){ // Start Main
    
    // Input
    int Number;
    printf("Enter a number: ");
    scanf("%d", &Number);

    // Process/Output
    if ((Number % 3 == 0) && (Number % 5 == 0)){
        printf("%d is divisible by both 3 and 5.", Number);
    }
    else {
        printf("%d is not divisible by both 3 and 5.", Number);
    }

    return 0;
} // End Main
