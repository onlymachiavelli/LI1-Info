#include <stdio.h>
#include <stdlib.h>



typedef struct Node{
    int head; 
    struct Node *next; 
}Node;


Node *fill(int n) {
    Node *head =NULL ;

    Node *tmp = NULL ;

    for (int i =0 ;i < n; i++) {
        Node* new = (Node * )malloc(sizeof(Node)) ;
        printf("ENTER DATA ! \n") ;
        scanf("%d" , &new->head) ; 
        if (head == NULL) {
            head = new ; 
            head->next = NULL ;
            tmp = head; 
        } 
        else {
            tmp -> next = new; 
            tmp = tmp->next ; 
        }

    }

    return head; 

}




void Show(Node *list, int n) {
    

    Node *tmp = list;
    /*
     while (tmp) {
        printf("%d\n", tmp->head);
        tmp = tmp->next;
    }
    */

    for (int i =0;i<n;i++) {
        printf("%d", tmp->head) ; 
        tmp = tmp->next ; 
    }
}


void Sort(Node ** head) {
    Node *tmp = *head;
        int check = 1 ; 
        while (check) {
            check = 0; 
            while (tmp->next) {
                if (tmp->head > tmp->next->head) {
                    Node *thing = tmp->next; 
                    tmp->next = tmp->next->next;
                    thing->next = tmp;
                    tmp = thing;
                    check = 1;
                }
                tmp=tmp->next ;
            }
        }

}

void sort(Node **head, int n){
    Node *tmp = *head;
    int check = 1;
    while (check) {
        check = 0 ;
        for (int i=0;i<n-1;i++){
                if (tmp->head > tmp->next->head) {
                    Node *data = (Node*) malloc(sizeof(Node)) ; 
                    data->next = NULL ; 
                    data->head = tmp->next->head; 
                    data->next = tmp->next; 
                    tmp = data; 
                    check = 1;
                }
                tmp=tmp->next ;
            }
    }
}


int main () {

    int n; 
    while (1) {
        printf("Enter n > 0 \n") ; 
        scanf("%d" , &n);
        if (n>0) break ; 
    }

    Node *head = fill(n) ; 
    printf("Before Sorting ! \n"); 

    Show(head, n);
    printf("\nAfter Sorting \n") ; 
    sort(&head, n) ; 
    Show(head, n);
    return 0 ; 
}