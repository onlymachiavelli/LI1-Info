#include <stdio.h>
#include <stdlib.h>

 struct {
    int data; 
    struct Node *next; 
}Node;



struct Node *fill(int n) {
    struct Node *head = (struct Node*)malloc(sizeof(Node));
    struct Node *Prev = NULL; 
    for (int i=0;i<n;i++){
        struct Node* new = (struct Node*)malloc(sizeof(Node));
        new->data = 0;
        printf("Enter the data ! \n"); 
        scanf("%d", &new->data); 
    }

}
int main () {
    
}