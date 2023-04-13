#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} NODE;

NODE *fill(int n) {
    NODE *head = (NODE*)malloc(sizeof(NODE));
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

int main() {

    int n ; 
    printf("Enter N \n") ;
    scanf("%d", &n);

    NODE *node = fill(n);
    print(node);

    return 0;
}
