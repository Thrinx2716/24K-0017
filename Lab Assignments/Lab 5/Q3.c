#include <stdio.h>

int main() {
	int Correct = 5678; 
	int PIN;
	int Attempts = 0;
	
	while (Attempts < 3) {
		// Input
		printf("Enter your 4-digit PIN: ");
		scanf("%d", &PIN);

		// Process/Output
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








