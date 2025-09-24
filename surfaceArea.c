#include <stdio.h>

int main() {
    const float pi = 3.1416;
    float radius, height, volume, surfaceArea;

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter radius: ");
    scanf("%f", &radius);

    volume = pi * radius * radius * height;
    surfaceArea = 2 * pi * radius * radius + 2 * pi * radius * height;

    printf("Volume is: %.2f\n", volume);
    printf("Surface Area is: %.2f\n", surfaceArea);

    return 0;
}