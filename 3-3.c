#include <stdio.h>
#include <conio.h>

int main() {
    long int salary; //USER INPUT INCOME AMOUNT
    float tax; //TO STORE TAX

    printf("Enter the Yearly Salary: ");
    scanf("%ld", &salary);

    tax = 0;

    if (salary<=250000){
        tax = salary * 0;
    }
    else if (salary > 250000 && salary <= 500000) {
        tax = (salary - 250000) * 5 / 100; 
    }
    else if (salary > 500000 && salary <= 1000000) {
        tax = (salary - 500000) * 20 / 100; 
    }
    else {
        tax = (salary - 1000000) * 30 / 100; 
    }

    printf("\nSalary of the User is: %ld", salary);
    printf("\nTaxable Amount to be Paid by USer is: %0.2f", tax);

    getch();
    return 0;
}