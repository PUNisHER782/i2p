#include <stdio.h>
int main() {
    int n;
    while (1) {
        printf("Enter a number (or -1 to stop): ");
        scanf("%d", &n);
        if (n == -1) {
            printf("Stop!\n");
            break;
        } else {
            printf("Hello World\n");
        }
    }
    return 0;
}
