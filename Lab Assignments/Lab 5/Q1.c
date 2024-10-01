#include <stdio.h>

int main() {
    int Integer, Total = 0;

    while (Integer != 0) {
	// Input
        printf("Enter an integer (0 to stop): ");
        scanf(" %d", &Integer);

	// Process
        Total = Total + Integer;
    }

    // Output
    printf("Your total is: %d\n", Total);
    return 0;
}

/*
While/Do ... While Loop is better for a stopping condition since it depends entirely on the user input and not systematic calculations. 
*/
