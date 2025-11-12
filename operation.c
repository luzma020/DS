#include <stdio.h>

int main() {
    int arr[100], n, i, pos, val, search, found = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    
    if(n < 100) {
        printf("\n\nInsert Operation:");
        printf("\nEnter position to insert (0 to %d): ", n);
        scanf("%d", &pos);
        printf("Enter value to insert: ");
        scanf("%d", &val);

        if(pos >= 0 && pos <= n) {
            for(i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = val;
            n++;
            printf("Array after insertion: ");
            for(i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
        } else {
            printf("Invalid position. Insertion skipped.\n");
        }
    } else {
        printf("\nArray is full. Insertion skipped.\n");
    }

    
    if(n > 0) {
        printf("\n\nDelete Operation:");
        printf("\nEnter position to delete (0 to %d): ", n - 1);
        scanf("%d", &pos);

        if(pos >= 0 && pos < n) {
            for(i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            printf("Array after deletion: ");
            for(i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
        } else {
            printf("Invalid position. Deletion skipped.\n");
        }
    } else {
        printf("\nArray is empty. Deletion skipped.\n");
    }

   
    printf("\n\nSearch Operation:");
    printf("\nEnter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element found at position %d (index %d)\n", i + 1, i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}

