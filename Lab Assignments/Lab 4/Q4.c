#include <stdio.h>

int main() {
	int choice;
	float A, B, area, radius;
	printf("Enter 1 to calculate the area of a circle\n");
	printf("Enter 2 to calculate the area of a triangle\n");
	printf("Enter 3 to calculate the area of a rectangle\n");
	printf("Enter 4 to exit\n");
	printf("Option: ");
	scanf("%d", &choice);

	switch (choice) {
	case 1: 
		printf("Enter the radius of the circle: ");
		scanf("%f", &radius);
		area = 3.14159 * radius * radius;
		printf("The Area of a circle with radius %.2f is: %.2f units", radius, area);
		break;
	case 2:
		printf("Enter side A: ");
		scanf("%f", &A);
		printf("Enter side B: ");
		scanf("%f", &B);
		area = 0.5 * A * B;
		printf("The area of a triangle with sides %.2f and %.2f is %.2f units", A, B, area);
		break;
	case 3:
		printf("Enter side A: ");
		scanf("%f", &A);
		printf("Enter side B: ");
		scanf("%f", &B);
		area = A * B;
		printf("The area of a rectangle with sides %.2f and %.2f is: %.2f units", A, B, area);
		break;
	case 4: 
		printf("Exiting...");
		break;
	default:
		printf("Invalid choice");
	}

return 0;
} // end main

	