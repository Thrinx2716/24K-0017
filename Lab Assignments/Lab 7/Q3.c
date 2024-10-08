#include <stdio.h>

int main() {
    char Name[100], Email[100], Phone[100];
    int i, Valid = 1;

    // Input (Name)
    printf("Enter your name: ");
    scanf(" %[^\n]", Name);

    // Process
    for (i = 0; Name[i] != '\0'; i++) {
        if (!((Name[i] >= 'A' && Name[i] <= 'Z') || (Name[i] >= 'a' && Name[i] <= 'z') || Name[i] == ' ')) {
            Valid = 0;
            break;
        }
    }
    if (Valid == 0) {
        printf("Invalid Name.");
        return 1;
    }

    // Input (Email)
    printf("Enter your email: ");
    scanf("%s", Email);

    // Process
    Valid = 0;
    for (i = 0; Email[i] != '\0'; i++) {
        if ((Email[i] >= 'A' && Email[i] <= 'Z') || (Email[i] >= 'a' && Email[i] <= 'z') || 
            (Email[i] >= '0' && Email[i] <= '9') || Email[i] == '.' || Email[i] == '_' || Email[i] == '-') {
            continue;
        } else if (Email[i] == '@') {
            Valid = 1;
        } else {
            Valid = 0;
            break;
        }
    }
    if (Valid == 0) {
        printf("Invalid Email.");
        return 1;
    }

    // Input (Phone Number)
    printf("Enter your phone number: ");
    scanf("%s", Phone);
    
    // Process
    Valid = 1;
    i = 0;
    if (Phone[0] == '+') i++;
    for (; Phone[i] != '\0'; i++) {
        if (!((Phone[i] >= '0' && Phone[i] <= '9') || Phone[i] == ' ' || Phone[i] == '-')) {
            Valid = 0;
            break;
        }
    }
    if (Valid == 0) {
        printf("Invalid Phone Number.");
        return 1;
    }

    // Output
    printf("Registration successful!");
    return 0;
}
