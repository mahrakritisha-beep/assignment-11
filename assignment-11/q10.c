#include <stdio.h>

static float balance = 5000.0;   // Private to bank.c

void deposit(float amount) {
    balance += amount;
}

void withdraw(float amount) {
    if (amount <= balance)
        balance -= amount;
    else
        printf("Insufficient balance!\n");
}

void displayBalance() {
    printf("Current Balance = Rs. %.2f\n", balance);
}
#include <stdio.h>

extern void deposit(float);
extern void withdraw(float);
extern void displayBalance(void);

int main() {
    displayBalance();

    deposit(2000);
    printf("After deposit:\n");
    displayBalance();

    withdraw(1500);
    printf("After withdrawal:\n");
    displayBalance();

    return 0;
}