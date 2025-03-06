#include <stdio.h>

#define FIXED_CHARGE 50


float calculateBill(int units) {
    float amount = 0;

    if (units <= 100) {
        amount = units * 3.50;
    } else if (units <= 300) {
        amount = (100 * 3.50) + ((units - 100) * 5.00);
    } else if (units <= 500) {
        amount = (100 * 3.50) + (200 * 5.00) + ((units - 300) * 7.50);
    } else {
        amount = (100 * 3.50) + (200 * 5.00) + (200 * 7.50) + ((units - 500) * 10.00);
    }

    return amount + FIXED_CHARGE;
}

int main() {
    char name[50];
    int customerID, units;
    float totalBill;


    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Units Consumed: ");
    scanf("%d", &units);


    totalBill = calculateBill(units);


    printf("\n========== Electricity Bill ==========\n");
    printf("Customer ID    : %d\n", customerID);
    printf("Customer Name  : %s\n", name);
    printf("Units Consumed : %d\n", units);
    printf("Total Bill (₹) : %.2f\n", totalBill);
    printf("======================================\n");

    return 0;
}

