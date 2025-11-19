#include <stdio.h>

int parent[100];

// Find function with path compression
int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

// Union function
void union_set(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);

    if (rootX != rootY) {
        parent[rootY] = rootX;
        printf("Union done: %d and %d\n", x, y);
    } else {
        printf("%d and %d are already in the same set.\n", x, y);
    }
}

int main() {
    int n, choice, x, y, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Initialize parent
    for (i = 1; i <= n; i++)
        parent[i] = i;

    while (1) {
        printf("\n--- Disjoint Set Menu ---\n");
        printf("1. Union\n");
        printf("2. Find\n");
        printf("3. Display Parents\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two elements to union: ");
                scanf("%d %d", &x, &y);
                union_set(x, y);
                break;

            case 2:
                printf("Enter element to find representative: ");
                scanf("%d", &x);
                printf("Representative of %d is %d\n", x, find(x));
                break;

            case 3:
                printf("Element : Parent\n");
                for (i = 1; i <= n; i++)
                    printf("%d : %d\n", i, parent[i]);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

