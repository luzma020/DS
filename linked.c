#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert() {
    struct Node* n = malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &n->data);
    n->next = NULL;

    if(!head) head = n;
    else {
        struct Node* t = head;
        while(t->next) t = t->next;
        t->next = n;
    }
    printf("Inserted.\n");
}

void delete() {
    if(!head) { printf("List empty.\n"); return; }
    int key;
    printf("Enter data to delete: ");
    scanf("%d", &key);

    struct Node *t = head, *p = NULL;
    while(t && t->data != key) { p = t; t = t->next; }
    if(!t) { printf("Not found.\n"); return; }
    if(!p) head = t->next;
    else p->next = t->next;
    free(t);
    printf("Deleted.\n");
}

void search() {
    if(!head) { printf("List empty.\n"); return; }
    int key, pos = 1;
    printf("Enter data to search: ");
    scanf("%d", &key);

    struct Node* t = head;
    while(t) {
        if(t->data == key) { printf("Found at position %d.\n", pos); return; }
        t = t->next; pos++;
    }
    printf("Not found.\n");
}

void display() {
    if(!head) { printf("List empty.\n"); return; }
    for(struct Node* t = head; t; t = t->next)
        printf("%d -> ", t->data);
    printf("NULL\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1.Insert 2.Delete 3.Search 4.Display 5.Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: search(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid!\n");
        }
    }
}

