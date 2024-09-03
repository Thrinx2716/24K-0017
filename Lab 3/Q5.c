#include <stdio.h>

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
