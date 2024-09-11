#include <stdio.h>

int main() { // start main
    
    char Name[100];
    int ID, Units, Amount;
    float Charge, Net;
    int Subcharge = 0;
    
    printf("Enter ID: ");
    scanf("%d", &ID);
    printf("Enter Name: ");
    scanf("%s", &Name);
    printf("Enter Units: ");
    scanf("%d", &Units);
    
    if (Units < 200){ // Under 200
        Charge = 16.20;
    }
    else {
        if (Units >= 200 && Units < 300){ // Under 300
        Charge = 20.10;
        }
        else {
            if (Units >= 300 && Units < 500){ // Under 500
            Charge = 27.10;
            }
            else { // Above 500
                Charge = 35.90;
            }
        }
    }
    Amount = Units * Charge;
    if (Amount >= 18000) {
        Subcharge = Amount * 0.15;
    }
    Net = Amount + Subcharge; // No subcharge if amount is lesser than 18000

    printf("\nCustomer ID: %d\n", ID);
    printf("Customer Name: %s\n", Name);
    printf("Units Consumed: %d\n", Units);
    printf("Amount Charges @Rs. %.2f per unit: %d\n", Charge, Amount);
    printf("Subcharge Amount: %d\n", Subcharge);
    printf("Net Amount Paid by the Customer: %.2f", Net);
return 0;
} // end main