#include <stdio.h>

int main() { // start main
    	int n, i, Sum = 0;

    	// Input
    	printf("Enter number of elements: ");
    	scanf("%d", &n);

    	// Process
	int Arr[n];
	printf("Enter elements of array: ");
    	for(i = 0; i < n; i++) {
        	scanf("%d", &Arr[i]);
    	}

	// Output
    	for(i = 0; i < n; i++) {
        	Sum += Arr[i];
    	}

    	printf("Sum of elements: %d\n", Sum);

    	return 0;
} // end main
