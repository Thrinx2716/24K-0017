#include <stdio.h>

int main() {
    float Amount, DiscAmount, Saved;
    printf("Enter the amount paid: ");
    scanf("%f", &Amount);
    if (Amount >= 500) {
        if (Amount < 2000) {
            Saved = 0.05 * Amount;
        }
        else {
            if (Amount >= 2000 && Amount < 4000) {
            Saved = 0.1 * Amount;
            }
            else {
                if (Amount >= 4000 && Amount < 6000) {
                Saved = 0.2 * Amount;
                }
                else {
                    Saved = 0.35 * Amount;
                }
            }
        }
        
        DiscAmount = Amount - Saved;
        printf("The actual amount is: %.2f\n", Amount);
        printf("The saved amount is: %.2f\n", Saved);
        printf("The amount after applying discount is: %.2f\n", DiscAmount);
    }
    else {
        printf("Amount must be 500 or more to be eligible for discount.");
    }
return 0;
} // end main