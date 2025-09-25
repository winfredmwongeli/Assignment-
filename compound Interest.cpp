#include <stdio.h>
#include <math.h>  // Needed for the pow() function

int main() {
    float principal, rate, time, amount, compoundInterest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Annual Interest Rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Compound Interest is: %.2f\n", compoundInterest);
    printf("Total Amount after %.2f years is: %.2f\n", time, amount);

    return 0;
}
