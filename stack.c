#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push() {
    if(top == SIZE-1) { 
        printf("Stack Overflow!\n"); 
        return; 
    }
    int x;
    printf("Enter value to push: ");
    scanf("%d", &x);
    stack[++top] = x;
    printf("%d pushed.\n", x);
}

void pop() {
    if(top == -1) { 
        printf("Stack Underflow!\n"); 
        return; 
    }
    printf("Popped: %d\n", stack[top--]);
}

void peek() {
    if(top == -1) { 
        printf("Stack is empty.\n"); 
        return; 
    }
    printf("Top element: %d\n", stack[top]);
}

void display() {
    if(top == -1) { 
        printf("Stack is empty.\n"); 
        return; 
    }
    printf("Stack elements: ");
    for(int i = top; i >= 0; i--) 
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1.Push 2.Pop 3.Peek 4.Display 5.Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}

