#include <stdio.h>

int main() {
	int Correct = 5678; 
	int PIN;
	int Attempts = 0;

	// Input/Process/Output
	while (Attempts < 3) {
		printf("Enter your 4-digit PIN: ");
		scanf("%d", &PIN);

		if (PIN == Correct) {
			printf("Access granted.\n");
			break;
		} else {
			Attempts++;
			if (Attempts < 3) {
				printf("Incorrect PIN. Try again.\n");
			} else {
				printf("Card is blocked. No more attempts allowed.");
			}
		}
	}

	return 0;
}








