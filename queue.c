#include <stdio.h>

#define SIZE 5

int main() {
    int queue[SIZE];
    int front = -1, rear = -1;
    int choice, value;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Enqueue
                if (rear == SIZE - 1) {
                    printf("Queue is full!\n");
                } else {
                    printf("Enter value to insert: ");
                    scanf("%d", &value);
                    if (front == -1) front = 0;
                    rear++;
                    queue[rear] = value;
                    printf("%d inserted.\n", value);
                }
                break;

            case 2: // Dequeue
                if (front == -1 || front > rear) {
                    printf("Queue is empty!\n");
                } else {
                    printf("%d deleted.\n", queue[front]);
                    front++;
                }
                break;

            case 3: // Display
                if (front == -1 || front > rear) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Queue elements: ");
                    for (int i = front; i <= rear; i++)
                        printf("%d ", queue[i]);
                    printf("\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}

