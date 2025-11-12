#include <stdio.h>

#define MAX 20

int queue[MAX], front = -1, rear = -1;

// Simple queue functions
void enqueue(int x) {
    if (rear == MAX - 1) {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = x;
}

int dequeue() {
    if (front == -1 || front > rear) {
        return -1; // empty
    }
    return queue[front++];
}

// BFS function
void BFS(int n, int graph[MAX][MAX], int start) {
    int visited[MAX] = {0};
    enqueue(start);
    visited[start] = 1;

    printf("BFS traversal: ");

    while (front <= rear) {
        int node = dequeue();
        printf("%d ", node);

        for (int i = 0; i < n; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

int main() {
    int n, start;
    int graph[MAX][MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    BFS(n, graph, start);

    return 0;
}

