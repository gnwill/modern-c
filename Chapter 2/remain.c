#include <stdio.h>

int main(void) {
    float loan, annual_rate, payment;
    float monthly_rate, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &annual_rate);

    printf("Enter amount of monthly payment: ");
    scanf("%f", &payment);

    monthly_rate = (annual_rate / 100.0f) / 12.0f;

    balance = loan;

    balance = balance - payment;
    balance = balance + balance * monthly_rate;
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance = balance - payment;
    balance = balance + balance * monthly_rate;
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance = balance - payment;
    balance = balance + balance * monthly_rate;
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}
