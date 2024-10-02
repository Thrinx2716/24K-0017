#include <stdio.h>

int main() { // Start Main
    float Attendance, Assignment, Quiz, Result, Final;
    char Grade;

    // Input
    printf("Enter attendance (in percent): ");
    scanf("%f", &Attendance);
    printf("Enter assignment score (in percent): ");
    scanf("%f", &Assignment);
    printf("Enter quiz score (in percent): ");
    scanf("%f", &Quiz);
    printf("Enter exam results (in percent): ");
    scanf("%f", &Result);

    // Process/Output

    Final = (Attendance * 0.1) + (Assignment * 0.2) + (Quiz * 0.1) + (Result * 0.6);
    
    printf("Final percentage: %.2f\n", Final);
    if (Final >= 80) {
        if (Final >= 90){
            printf("Your Grade is: A+");
    } else {
            printf("Your Grade is: A");
        }
    } else if (Final >= 60) {
            if (Final >= 70) {
                printf("Your Grade is: B");
    } else {
            printf("Your Grade is: C");
        }
    } else if (Final < 50) {
            if (Final >= 50) {
                printf("Your Grade is: D");
    } else {
            printf("Your Grade is: F");
        }
    }

    return 0;
} // End Main
