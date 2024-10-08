#include <stdio.h>

int main() { // start main
      	int n, i;
  
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
    	printf("Elements in reverse order: ");
    	for(i = n - 1; i >= 0; i--) {
        	printf("%d ", Arr[i]);
    	}

    	return 0;
} // end main
