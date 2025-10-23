//name:kioko winfred mwongeli
//reg:CT101/g/26569/25

#include <stdio.h>

// Function to calculate electricity bill
float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    } 
    else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}

int main() {
    int units;
    printf("Enter number of electricity units: ");
    scanf("%d", &units);

    printf("Total bill = KSh. %.2f\n", calculateElectricBill(units));

    return 0;
    }