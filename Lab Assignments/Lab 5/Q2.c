#include <stdio.h>

int main() {
	int a, b, i, Sum = 0, Temp;
	
	// Input
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	
	// Process
	if (a > b) {
		Temp = a;
		a = b;
		b = Temp;
	}

	for (i = a; i <= b; i++) {
		if (i % 2 == 0) {
			Sum += i;
		}
	}

	// Output
	printf("Sum of even numbers b/w %d and %d = %d\n", a, b, Sum);

	return 0;
}






