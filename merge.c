#include <stdio.h>

int main() {
    int arr[100],arr1[100], n,n1, i, j;

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
    
    printf("\nEnter the number of elements (max 100): ");
    scanf("%d", &n1);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("\nOriginal array: ");
    for(i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
   	}
   	int marr[n+n1];
   for(i = 0; i < n; i++) {
         marr[i] = arr[i];
    }
    for(j = 0; j < n1; j++) {
        marr[n + j] = arr1[j];
    }
    
  printf("\nMerged array: ");
    for(i = 0; i < n+n1; i++) {
        printf("%d ", marr[i]);
    }
   
    return(0);
    }
