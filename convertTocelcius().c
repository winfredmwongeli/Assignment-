//name:kioko winfred mwongeli
//reg:CT101/g/26569/25

#include <stdio.h>
// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(fahrenheit));

    return 0;
}