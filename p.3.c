//Write a program in c to find the distance between 2 points.
#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2;
    printf("Enter the coordinates of the two points (X1, Y1, X2, Y2): ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between the two points: %f\n", distance);

    return 0;
}
