//Write a program in c to check whether a triangle is right angled triangle or not.
#include <stdio.h>
#include <math.h>

int main() {
    float h, hy, b;

    printf("Enter the values of H, HY, and B: ");
    scanf("%f %f %f", &h, &hy, &b);

    float a = pow(h, 2);
    float c = pow(b, 2);
    float d = a + c;
    float v = sqrt(d);

    if (fabs(hy - v) < 0.0001) {
        printf("The triangle is a right-angled triangle.\n");
    } else {
        printf("The triangle is not a right-angled triangle.\n");
    }

    return 0;
}
