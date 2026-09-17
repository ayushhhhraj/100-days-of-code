#include <stdio.h>

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area of the circle is %f\n", area);
    printf("Circumference of the circle is %f\n", circumference);

    return 0;
}