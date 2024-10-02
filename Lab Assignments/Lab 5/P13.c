#include <stdio.h>

int main() { // Start Main
    char Char, Encrypted, Decrypted;
    int Key, DeKey;

    // Input
    printf("Enter a Character to Encrypt: ");
    scanf("%c", &Char);
    printf("Enter an Encryption Key (Single-digit): ");
    scanf("%d", &Key);

    // Process/Output
    Encrypted = Char ^ Key;
    printf("Encrypted character: %c\n", Encrypted);

    printf("Enter a Decryption Key (Single-digit): ");
    scanf("%d", &DeKey);

    if (DeKey == Key){
        Decrypted = Encrypted ^ Key;
        printf("Decrypted character: %c", Decrypted);
    }
    else {
        printf("Wrong Decryption Key.");
    }

    return 0;
} // End Main