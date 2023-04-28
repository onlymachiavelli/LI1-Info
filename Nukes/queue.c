#include <stdio.h>
#include <stdlib.h>

typedef struct Cell {
    int data; 
    struct Cell *next;
} Cell;

typedef struct {
    Cell *head, *queue;
} Queue; 

Queue *initialize() {
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->head = NULL;
    q->queue = NULL;
    return q;
}

int isEmpty(Queue *queue) {
    return (queue->head == NULL && queue->queue == NULL);
}

int isDefined(Queue *queue) {
    return (queue != NULL);
}

void push(int x, Queue *queue) {
    Cell *m = (Cell *)malloc(sizeof(Cell));
    m->data = x; 
    m->next = NULL;
    if (isEmpty(queue)) {
        queue->head = queue->queue = m;
    }
    else {
        Cell *tmp = queue->queue; 
        tmp->next = m;
        queue->queue = m;    
    }
}

void pop(Queue *queue) {
    Cell *m;
    if (isEmpty(queue)) {
        printf("Error: Queue is empty.\n");
        return;
    }
    else {
        m = queue->head;
        if (m->next == NULL) {
            queue->head = queue->queue = NULL;
        }
        else {
            queue->head = m->next;
        }
        free(m);
    }
}

void showQueue(Queue *queue) {
    Cell *m;
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
    }
    else {
        m = queue->head;
        while (m != NULL) {
            printf("%d ", m->data);
            m = m->next;
        }
        printf("\n");
    }
}

int main() {
    int n;
    Queue *queue = initialize();
    printf("Enter the number of elements you want to insert in the queue: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int x;
        printf("Enter the element you want to insert in the queue: ");
        scanf("%d", &x);
        push(x, queue);
    }
    
    printf("The elements in the queue are: ");
    showQueue(queue);
    
    printf("The elements in the queue after popping are: ");
    pop(queue);
    showQueue(queue);
    
    return 0;
}
