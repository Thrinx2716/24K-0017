#include <stdio.h>

int main() {
    char Response;
    int Streak = 0;
    int Run = 1;
    char Continue;

    while (Run) {
        printf("Did you send a snap today? (Y/N): ");
        scanf(" %c", &Response);

        if (Response == 'Y' || Response == 'y') {
            Streak++;
            printf("Your current streak is: %d days.\n", Streak);
        } else if (Response == 'N' || Response == 'n') {
            Streak = 0; 
            printf("Streak broken. Your current streak is: %d days.\n", Streak);
        } else {
            printf("Invalid Input.\n");
        }

        printf("Do you want to continue tracking your streak? (Y/N): ");
        scanf(" %c", &Continue);
        if (Continue == 'N' || Continue == 'n') {
            Run = 0;
        }
    }

    printf("Your final streak is: %d days.\n", Streak);
    return 0;
}
