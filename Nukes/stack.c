#include <stdio.h>
#include <stdlib.h>

//pile 
typedef struct Stack {
    int data;
    struct Stack *next;
} Stack;

Stack *initialize() {
    return NULL;
}

int isEmpty(Stack *s) {
    return (s == NULL);
}

void push(int x, Stack **s) {
    Stack *m = (Stack *) malloc(sizeof(Stack));
    m->data = x;
    m->next = *s;
    *s = m;
}

int pop(Stack **s) {
    if (isEmpty(*s)) {
        printf("Error: Stack is empty.\n");
        return -1;
    } else {
        Stack *m = *s;
        int data = m->data;
        *s = m->next;
        free(m);
        return data;
    }
}

int isDefined(Stack *s) {
    return (s != NULL);
}

void showStack(Stack *s) {
    Stack *m = s;
    while (m != NULL) {
        printf("%d\n", m->data);
        m = m->next;
    }
}

int main() {

    Stack *s = initialize();
    int n;
    printf("Enter the number of elements you want to add to the stack: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        printf("Enter the element you want to add to the stack: ");
        scanf("%d", &x);
        push(x, &s);
    }
    printf("The elements in the stack are: \n");
    showStack(s);

    int popped = pop(&s);
    printf("After Popping: \n");
    showStack(s);
    printf("Popped element: %d\n", popped);

    return 0;
}
