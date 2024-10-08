// Class Task to linear search if a number is in an array and display it's position.

#include <stdio.h>

int main() { // start main
    int Len, Target, Pos = -1;

    printf("Enter length of array: ");
    scanf("%d", &Len);
    int Num[Len];

    // Input
    printf("Enter %d integers:\n", Len);
    for (int i = 0; i < Len; i++) {
        scanf("%d", &Num[i]);
    }

    // Process
    printf("Enter an integer to search: ");
    scanf("%d", &Target);

    for (int i = 0; i < Len; i++) {
        if (Num[i] == Target) {
            Pos = i;
            break;
        }
    }

    // Output
    if (Pos != -1) {
	Pos += 1;
        printf("%d found at position %d.\n", Target, Pos);
    } else {
        printf("%d not found in the array.\n", Target);
    }

    return 0;
} // end main
