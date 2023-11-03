//wap in c to insert an element in an array
#include <stdio.h>

int main() {
    int array[100];
    int n, pos, value;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position. Position should be between 0 and %d.\n", n);
    } else {
        printf("Enter the element you want to insert: ");
        scanf("%d", &value);
        for (int i = n; i > pos; i--) {
            array[i] = array[i - 1];
        }

        array[pos] = value;

        n++;
        printf("Array after insertion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}