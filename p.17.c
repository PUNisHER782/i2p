//Write a program in c to check whether a line is straight line or not.

#include <stdio.h>
int main() {
    float y, x, m, c;

    printf("Enter the values of Y, X, M, and C: ");
    scanf("%f %f %f %f", &y, &x, &m, &c);

    if (y == m * x + c) {
        printf("The line is a straight line.\n");
    } else {
        printf("The line is not a straight line.\n");
    }
}
