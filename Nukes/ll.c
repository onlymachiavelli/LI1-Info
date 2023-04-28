#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} NODE;

NODE *fill(int n) {
    NODE *head = NULL; // initialize head to NULL
    NODE *prev_node = NULL;
    int data;

    for (int i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &data);
        NODE *new_node = (NODE *)malloc(sizeof(NODE));
        new_node->data = data;
        new_node->next = NULL;

        if (prev_node != NULL) {
            prev_node->next = new_node;
        }
        else {
            head = new_node;
        }

        prev_node = new_node;
    }

    return head;
}

void print(NODE *node) {
    while (node != NULL) {
        printf("%d\n", node->data);
        node = node->next;
    }
}

void addFirst(NODE **head) {
    NODE *new_node = (NODE *)malloc(sizeof(NODE));
    printf("Enter the data to be added at the beginning of the list: ");
    scanf("%d", &new_node->data);
    new_node->next = *head;
    *head = new_node;
}

void addEnd(NODE **head) {
    NODE *new_node = (NODE *)malloc(sizeof(NODE));
    printf("Enter the data you want to insert at the end of the list: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    }
    else {
        NODE *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

void deleteNode(NODE**head) {
    NODE *current = *head;
    NODE *prev = NULL;
    int data;
    printf("Enter the data you want to delete: ");
    scanf("%d", &data);

    if (current != NULL && current->data == data) {
        *head = current->next;
        free(current);
        return;
    }

    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("The data you entered is not in the list");
        return;
    }

    prev->next = current->next;
    free(current);
}


void Reverse(NODE**head) {
    NODE *prev = NULL;
    NODE *current = *head;
    NODE *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}
int main() {
    int n ; 
    printf("Enter N: ");
    scanf("%d", &n);
    NODE *node = fill(n);
    addFirst(&node); 
    addEnd(&node);
    deleteNode(&node);
    Reverse(&node);
    print(node);
    return 0;
}
