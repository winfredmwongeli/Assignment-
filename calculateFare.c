//name:kioko winfred mwongeli
//reg:CT101/g/26569/25
#include <stdio.h>

// Function to calculate fare
float calculateFare(float distance) {
    float fare = distance * 50;  // KSh. 50 per kilometer
    return fare;
}

int main() {
    float distance;
    printf("Enter distance traveled (in kilometers): ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n", calculateFare(distance));

    return 0;
}