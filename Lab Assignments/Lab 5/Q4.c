#include <stdio.h>

int main(){ // Start Main
    
    // Input
    int Age;
    int HasCitizenship;
    printf("Enter age: ");
    scanf("%d", &Age);
    printf("Active citizenship status (1 for Yes/0 for No): ");
    scanf("%d", &HasCitizenship);

    // Process/Output
    if ((Age >= 18) && (HasCitizenship == 1)){
        printf("You are eligible to vote.");
    }
    else {
        printf("You aren't eligible to vote.");
    }

    return 0;
} // End Main
