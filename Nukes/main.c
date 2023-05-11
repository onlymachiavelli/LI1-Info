#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int head;
    struct Node* next;
} Node;

Node* fill(int n) {
    Node* head = NULL;
    Node* tmp = NULL;

    for (int i = 0; i < n; i++) {
        Node* new_node = (Node*) malloc(sizeof(Node));
        printf("ENTER DATA ! \n");
        scanf("%d", &new_node->head);
        new_node->next = NULL;
        
        if (head == NULL) {
            head = new_node;
            tmp = head;
        } else {
            tmp->next = new_node;
            tmp = tmp->next;
        }
    }

    return head;
}

void show(Node* list) {
    Node* tmp = list;

    while (tmp != NULL) {
        printf("%d ", tmp->head);
        tmp = tmp->next;
    }
    printf("\n");
}

void sort(Node** head) {
    int swapped = 1;
    while (swapped) {
        swapped = 0;
        Node* current = *head;
        Node* prev = NULL;

        while (current != NULL && current->next != NULL) {
            if (current->head > current->next->head) {
                Node* next = current->next;
                current->next = next->next;
                next->next = current;

                if (prev == NULL) {
                    *head = next;
                } else {
                    prev->next = next;
                }

                prev = next;
                swapped = 1;
            } else {
                prev = current;
                current = current->next;
            }
        }
    }
}

int main() {
    int n;
    while (1) {
        printf("Enter n > 0\n");
        scanf("%d", &n);
        if (n > 0) break;
    }

    Node* head = fill(n);
    printf("Before Sorting:\n");
    show(head);

    sort(&head);

    printf("After Sorting:\n");
    show(head);

    return 0;
}
