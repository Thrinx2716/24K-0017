#include <stdio.h>

int main() {
    int Temp[7];
    int i;
    float Sum = 0, Average;
    int Extremes[7], Count = 0;

    // Input
    printf("Enter temperatures for 7 days:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &Temp[i]);
    }

    // Process
    for (i = 0; i < 7; i++) {
        Sum += Temp[i];
        
        if (Temp[i] > 40 || Temp[i] < 0) {
            Extremes[Count++] = i + 1;
        }
    }

    // Calculate average temperature
    Average = Sum / 7;

    // Output
    printf("Average temperature: %.2f degrees C\n", Average);
    if (Count > 0) {
        printf("Extreme temperatures on day");
        if (Count == 1) {
            printf(" %d.", Extremes[0]);
        } else {
            printf("s ");
            for (i = 0; i < Count; i++) {
                printf("%d", Extremes[i]);
                if (i < Count - 1) {
                    printf(" and ");
                } else {
                    printf(".");
                }
            }
        }
    } else {
        printf("No extreme temperatures.");
    }

    return 0;
}