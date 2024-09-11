#include <stdio.h>

int main() {
    char from, to;
    float temp, conv;

    printf("Select the input temperature unit (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &from);
    printf("Enter the temperature value: ");
    scanf("%f", &temp);
    printf("Select the unit to convert to (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &to);
    if (from == 'C') {
       switch(to) {
                case 'F': // C to F
                    conv = (temp * 9 / 5) + 32;
                    printf("%.2f°C is equal to %.2f°F\n", temp, conv);
                    break;
                case 'K': // C to K
                    conv = temp + 273.15;
                    printf("%.2f°C is equal to %.2f°K\n", temp, conv);
                    break;
                case 'C': //C toC
                    printf("The temperature remains %.2f°C\n", temp);
                    break;
                default:
                    printf("Invalid unit selected for conversion.\n");
    } 
	else if (from == 'F') {
       switch(to) {
                case 'C':  // Fahrenheit to Celsius
                    conv = (temp - 32) * 5 / 9;
                    printf("%.2f°F is equal to %.2f°C\n", temp, conv);
                    break;
                case 'K':  // Fahrenheit to Kelvin
                    conv = (temp - 32) * 5 / 9 + 273.15;
                    printf("%.2f°F is equal to %.2f°K\n", temp, conv);
                    break;
                case 'F':  // Fahrenheit to Fahrenheit
                    printf("The temperature remains %.2f°F\n", temp);
                    break;
                default:
                    printf("Invalid unit selected for conversion.\n");
            }
            break;
        }
    else if (from == 'K') {
        if (to == 'C') {
            conv = temp - 273.15;  // Kelvin to Celsius
            printf("%.2f°K is equal to %.2f°C\n", temp, conv);
        } else if (to == 'F') {
            conv = (temp - 273.15) * 9 / 5 + 32;  // Kelvin to Fahrenheit
            printf("%.2f°K is equal to %.2f°F\n", temp, conv);
        } else if (to == 'K') {
            printf("The temperature remains %.2f°K\n", temp);
        } else {
            printf("Invalid unit selected for conversion.\n");
        }
    } else {
        printf("Invalid input temperature unit.\n");
    }
    printf("Thank you for using our AI-powered temperature converter.\n");
    
return 0;
}
