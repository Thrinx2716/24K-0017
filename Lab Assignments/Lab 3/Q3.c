#include <stdio.h>

// Code for Q3 of Lab 3 (Output tax to be paid and the salary after paying tax after taking the tax rate and salary from user)

int main() {
    float rate, salary, amount, netsalary;

    // Taking inputs from user (tax in % and salary in dollars) 
    
	printf("Enter the tax rate: ");
    scanf("%f", &rate);
	printf("Enter your salary: ");
    scanf("%f", &salary);
	
    // Calculating tax amount
    amount = (rate / 100) * salary;

    // Calculating the salary after tax
    netsalary = salary - amount;

    // Displaying the results
    printf("\nTax to be paid: $%.2f\n", amount);
    printf("Salary after paying tax: $%.2f\n", netsalary);

    return 0;
}
