#include <stdio.h>

int main() {
    int a, b, temp;

    // Taking variables from user
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    // Swapping values
    temp = a;
    a = b;
    b = temp;

    // Displaying the values after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
	return 0;
}