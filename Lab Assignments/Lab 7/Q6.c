#include <stdio.h>

int main() {
    int Len, i;
    printf("Enter the length of array: ");
    scanf("%d", &Len);

    int Arr[Len];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < Len; i++) {
        scanf("%d", &Arr[i]);
    }

    int Count[Len];
    for (i = 0; i < Len; i++) {
        Count[i] = 0;
    }

    for (i = 0; i < Len; i++) {
        Count[Arr[i]]++;
    }

    printf("Numbers occurring more than once in the array: ");
    int Found = 0;
    for (i = 0; i < Len; i++) {
        if (Count[i] > 1) {
            if (Found) {
                printf(" and ");
            }
            printf("%d", i);
            Found = 1;
        }
    }
    if (!Found) {
        printf("None");
    }
    printf(".\n");

    return 0;
}