#include <stdio.h>
int main() {
    int a, b, c, d, e, f;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    d = a - b;
    e = a * b;
    if (b != 0) {
        f = a / b;
    } else {
        printf("Division by zero is not allowed.\n");
    }
    printf("Addition = %d\n", c);
    printf("Subtraction = %d\n", d);
    printf("Multiplication = %d\n", e);
    printf("Division = %d\n", f);
}
