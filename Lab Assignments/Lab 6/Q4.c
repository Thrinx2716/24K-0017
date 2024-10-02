#include <stdio.h>

int main() { // Start Main
        int Streak = 0;
        int Days;
        char Sent;
  
        // Input
        printf("Enter the number of days you want to track: ");
        scanf("%d", &Days);

        // Process
        for (int i = 1; i <= Days; i++) {
            printf("Day %d: ", i);
            printf("Did you send a message today? (Y/N): ");
            scanf(" %c", &Sent);

            if (Sent == 'Y' || Sent == 'y') {
                Streak++;
                printf("Your current streak is: %d days.\n", streak);
            } else if (Sent == 'N' || Sent == 'n') {
                Streak = 0;
                printf("Streak broken and reset to 0.\n");
            } else {
                printf("Invalid input.\n");
                i--;
            }
        }

        // Output
        printf("Your final streak is: %d days.\n", Streak);
        return 0;
} // End Main
