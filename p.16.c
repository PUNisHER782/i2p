//Write a program in c to calculate the area of triangle using Haron's formula.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the values of A, B, and C: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        // Calculate the semi-perimeter
        s = (a + b + c) / 2;

        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Area of the triangle is: %f\n", area);
    } else {
        printf("Invalid triangle. The given sides cannot form a triangle.\n");
    }
}
