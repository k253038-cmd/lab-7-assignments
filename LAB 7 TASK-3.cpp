#include <stdio.h>

int main() {
    int n, i, j;

  
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

   
    printf("\nDuplicate elements are: ");
    int found = 0;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break; 
            }
        }
    }

    if (!found)
        printf("None");

    printf("\n");

    return 0;
}
