#include <stdio.h>

int main(){ // Start Main
    int Number, i, Is_Prime = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &Number);

    // Process
    if (Number <= 1) {
        Is_Prime = 0;
    } else {
        for (i = 2; i * i <= Number; i++) {
            if (Number % i == 0) {
                Is_Prime = 0;
                break;
            }
        }
    }

    // Output
    if (Is_Prime == 1){
        printf("%d is prime. ", Number);
        printf("Series is = ");
        int a = 0, b = 1, NextNum;

        if (Number >= 0) printf("%d ", a);
        if (Number >= 1) printf("%d ", b);

        NextNum = a + b;

        while (NextNum <= Number) {
            printf("%d ", NextNum);
            a = b;
            b = NextNum;
            NextNum = a + b;
        }
    } else {
        printf("%d is not prime.", Number);
    }

    return 0;
} // End Main