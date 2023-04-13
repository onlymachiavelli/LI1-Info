#include <stdio.h>
#include <stdlib.h>

typedef struct  {
    int val; 
    struct Node *next; 
}Node;

int main () {
    //reserve one linked list 
    Node *head = (Node*)malloc(sizeof(Node)) ; 

    printf("Enter any data ! \n");
    scanf("%d", &head->val);

    printf("The first data is : %d" , head->val); 
}

