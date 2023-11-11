//Write a program in c to find the factorial of n.
#include <stdio.h>

int main() {
    int a = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        a *= i;
    }

    printf("The factorial of the number %d is: %d\n", n, a);

    return 0;
}
