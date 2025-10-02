// KIOKO WINFRED MWONGELI
// CT101/G/26569/25

#include <stdio.h>

int main() {
    float units, total_bill;
    
    printf("Enter water units consumed: ");
    
    if (scanf("%f", &units) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1; 
    }
    
    if (units < 0) {
        printf("Consumption units cannot be negative.\n");
        return 1;
    }
    
    if (units <= 30) {
        total_bill = units * 20.0;
    } 
    
    else if (units <= 60) {
        total_bill = (30 * 20.0);
        total_bill += (units - 30) * 25.0;
    } 
    
    else {
        total_bill = (30 * 20.0);
        total_bill += (30 * 25.0); 
        total_bill += (units - 60) * 30.0;
    }
    
    printf("Total water bill: %.2f KES\n", total_bill);
    
    return 0;
}