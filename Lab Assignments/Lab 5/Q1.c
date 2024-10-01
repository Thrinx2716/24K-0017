#include <stdio.h>

int main() {
    int Integer, Total = 0;

    while (Integer != 0) {
        printf("Enter an integer (0 to stop): ");
        scanf(" %d", &Integer);
	
        Total = Total + Integer;
    }

    printf("Your total is: %d\n", Total);
    return 0;
}


