#include <stdio.h>

int main(){
	int Len, Min, Max;
	printf("Enter length of array: ");
    	scanf("%d", &Len);
    	int Arr[Len];

    	// Input
    	printf("Enter %d integers: ", Len);
    	for (int i = 0; i < Len; i++) {
        	scanf("%d", &Arr[i]);
    	}

	// Process
	Max = Arr[0];
	for (int i = 0; i < Len; i++) {
		if (Arr[i] > Max){
			Max = Arr[i];
		}
	}

	Min = Arr[0];
	for (int i = 0; i < Len; i++) {
		if (Arr[i] < Min){
			Min = Arr[i];
		}
	}

	// Output
	printf("Maximum Number: %d\n", Max);
	printf("Minimum Number: %d", Min);

return 0;
}