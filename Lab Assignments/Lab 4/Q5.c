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
                    printf("%.2f degrees C is equal to %.2f degrees F", temp, conv);
                    break;
                case 'K': // C to K
                    conv = temp + 273.15;
                    printf("%.2f degrees C is equal to %.2f degrees K", temp, conv);
                    break;
                case 'C': //C toC
                    printf("The temperature remains %.2f degrees C", temp);
                    break;
                default:
                    printf("Invalid unit selected for conversion.");
		}
    } 
	else if (from == 'F') {
       switch(to) {
                case 'C':  // F to C
                    conv = (temp - 32) * 5 / 9;
                    printf("%.2f degrees F is equal to %.2f degrees C", temp, conv);
                    break;
                case 'K':  // F to K
                    conv = (temp - 32) * 5 / 9 + 273.15;
                    printf("%.2f degrees F is equal to %.2f degrees K", temp, conv);
                    break;
                case 'F':  // F to F
                    printf("The temperature remains %.2f degrees F", temp);
                    break;
                default:
                    printf("Invalid unit selected for conversion.");
            	    break;
		}
    }
    else if (from == 'K') {
        switch(to) {
                case 'C':  // K to C
                    convertedTemp = temp - 273.15;
                    printf("%.2f degrees K is equal to %.2f degrees C", temp, convertedTemp);
                    break;
                case 'F':  // K to F
                    convertedTemp = (temp - 273.15) * 9 / 5 + 32;
                    printf("%.2f degrees Kelvin is equal to %.2f degrees F", temp, convertedTemp);
                    break;
                case 'K':  // K to K
                    printf("The temperature remains %.2f degrees K", temp);
                    break;
                default:
                    printf("Invalid unit selected for conversion.");
                    break;
            }
    } 
    else {
        printf("Invalid input temperature unit.\n");
    }
    
printf("Thank you for using our AI-powered temperature converter.\n");
return 0;
} // end main
