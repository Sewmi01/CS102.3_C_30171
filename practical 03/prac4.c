#include <stdio.h>

int main() {
    float basicSalary, monthlySales;
    char city;

    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter the monthly sales: ");
    scanf("%f", &monthlySales);

    printf("Enter the city (C for Colombo, any other character for other cities): ");
    scanf(" %c", &city);

    float additionalAllowance = 0.0;
    if (city == 'C') {
        additionalAllowance += 2500;
    }

    if (monthlySales >= 50000) {
        additionalAllowance += basicSalary * 0.15;
    } else if (monthlySales >= 25000) {
        additionalAllowance += basicSalary * 0.12;
    } else {
        additionalAllowance += basicSalary * 0.10;
    }

    int yearsOfService;
    printf("Enter the years of service: ");
    scanf("%d", &yearsOfService);

    if (yearsOfService > 5) {
        additionalAllowance += basicSalary * 0.10;
    }

    float grossRemuneration = basicSalary + additionalAllowance;
    printf("Gross monthly remuneration: %.2f\n", grossRemuneration);

    return 0;
}

