// KIOKO WINFRED MWONGELI
// CT101/G/26569/25

#include <stdio.h>

int main() {
    double balance = 500.0; 
    double withdrawal_amount = 0.0;

    printf("--- ATM Withdrawal Simulator ---\n");
    printf("Initial Account Balance: $%.2f\n\n", balance);

    while (balance > 0) {
        printf("Current Balance: $%.2f\n", balance);
        printf("Enter amount to withdraw: $");
        
        if (scanf("%lf", &withdrawal_amount) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
            continue; 
        }

        if (withdrawal_amount <= 0) {
            printf("Error: Withdrawal amount must be a positive value.\n\n");
            continue;
        }

        if (withdrawal_amount > balance) {
            printf("Error: Insufficient funds. Cannot withdraw $%.2f. Max available: $%.2f.\n\n", withdrawal_amount, balance);
            continue;
        }
        
        balance -= withdrawal_amount;
        printf("Withdrawal successful. Remaining balance: $%.2f\n\n", balance);
    }

    printf("--- Session Ended ---\n");
    printf("Final Balance: $%.2f\n", balance);
    printf("Account balance is zero or negative. No further withdrawals allowed.\n");

    return 0;

}
