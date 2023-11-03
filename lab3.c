
#include <stdio.h>

int binarySearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == target) {
            return mid;
        }

        if (array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(array) / sizeof(array[0]);
    int target;

    printf("Enter the element you want to search for: ");
    scanf("%d", &target);

    int result = binarySearch(array, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
}