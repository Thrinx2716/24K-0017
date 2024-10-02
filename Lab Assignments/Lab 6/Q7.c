#include <stdio.h>

int main() { // Start Main
	int Number, Sum, OriginalNum, Remainder, n = 0, i, Power;
    printf("Enter a number: ");
    scanf("%d", &Number);

    OriginalNum = Number;
    while (OriginalNum != 0){
        OriginalNum /= 10;
        n++;
    }

    OriginalNum = Number;

    while (OriginalNum != 0) {
        Remainder = OriginalNum % 10;

        Power = 1;
        for (i = 0; i < n; i++) {
            Power *= Remainder;
        }

        Sum += Power;
        OriginalNum /= 10;
    }

    (Sum == Number) ? printf("%d is an Armstrong Number.", Number) : printf("%d is not an Armstrong Number.", Number);

	return 0;
} // End Main