#include <stdio.h>

// Code for Q5 of Lab 3 (Output Simple Interest after taking Principal, Rate of Interest and Time Period as input from user)

int main() {
    float p, r, t, i;

    // Taking input with restrictions
    printf("Enter Principal amount (between 100 Rs to 1,000,000 Rs.): ");
    scanf("%f", &p);
	printf("Enter Rate of interest (between 5%% to 10%%): ");
    scanf("%f", &r);
	printf("Enter Time period (between 1 to 10 years): ");
    scanf("%f", &t);

    // Calculating Interest
    i = (p * r * t) / 100;

    // Output
    printf("The Interest is: %.2f Rs\n", i);

    return 0;
}
