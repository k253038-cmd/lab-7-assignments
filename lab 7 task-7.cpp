
#include <stdio.h>

int search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int numbers[10] = {5, 3, 8, 6, 2, 9, 1, 7, 0, 4};
    int target = 6;

    int result = search(numbers, 10, target);

    if (result != -1) {
        printf("Number found at index %d\n", result);
    } else {
        printf("Number not found\n");
    }

    return 0;
}

