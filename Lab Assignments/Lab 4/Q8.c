#include <stdio.h>

int main() { // start main
    int N;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    if (N >= 1 && N <= 9) {
        switch(N) {
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
    } else (N > 9) {
        printf("greater than 9");
    }
return 0;
} // end main