#include <stdio.h>

int main() {
    float fuelavg, totaldist, fwdfuelprice, returnfuelprice;
    float totalfuelused, totalfuelcost;

    // Giving values/initializing 
    totaldist = 1207.0 * 2; // Total distance (1207 KM each way)
    fwdfuelprice = 118.0;   // Price/liter during forward trip
    returnfuelprice = 123.0;    // Price/liter during return trip

    // Input for cars fuel average (needs to be positive in KM/liter)
    do {
        printf("Enter the car's fuel average: ");
        scanf("%f", &fuelavg);
        if (fuelavg <= 0) {
            printf("Fuel average must be a positive value!\n");
        }
    } while (fuelavg <= 0);

    // Calculate total fuel used for entire journey
    totalfuelused = totaldist / fuelavg;

    // Calculate total fuel cost for entire journey (1 forward + 1 return)
    totalfuelcost = (1207.0 / fuelavg) * fwdfuelprice + (1207.0 / fuelavg) * returnfuelprice;

    // Display results
    printf("\nTotal fuel consumed: %.2f liters\n", totalfuelused);
    printf("Total fuel cost: %.2f\n", totalfuelcost);

    return 0;
}
